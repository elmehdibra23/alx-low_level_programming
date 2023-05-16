#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>
int main(int argc, char *argv[]) {
int fd;
Elf32_Ehdr elf_header;
ssize_t bytes_read;
int i;
if (argc != 2) {
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return 1;
}
fd = open(argv[1], O_RDONLY);
if (fd < 0) {
perror("open");
return 1;
}
bytes_read = read(fd, &elf_header, sizeof(elf_header));
if (bytes_read < (ssize_t)sizeof(elf_header)) {
perror("read");
return 1;
}
close(fd);
if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3) {
fprintf(stderr, "Error: Not an ELF file\n");
return 1;
}
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++) {
printf("%02x ", elf_header.e_ident[i]);
}
printf("\n");
printf("  Class:   ");
switch(elf_header.e_ident[EI_CLASS]) {
case ELFCLASSNONE: printf("Invalid class\n"); break;
case ELFCLASS32:   printf("ELF32\n"); break;
case ELFCLASS64:   printf("ELF64\n"); break;
default:           printf("Unknown\n"); break;
}
printf("  Data:    ");
switch(elf_header.e_ident[EI_DATA]) {
case ELFDATANONE: printf("Invalid data encoding\n"); break;
case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
default:          printf("Unknown\n"); break;
}
printf("  Version: ");
switch(elf_header.e_ident[EI_VERSION]) {
case EV_NONE:    printf("0 (invalid)\n"); break;
case EV_CURRENT: printf("1 (current)\n"); break;
default:         printf("Unknown\n"); break;
}
printf("  OS/ABI:  %d\n", elf_header.e_ident[EI_OSABI]);
printf("  ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
printf("  Type:    ");
switch(elf_header.e_type) {
case ET_NONE: printf("None (No file type)\n"); break;
case ET_REL:  printf("REL (Relocatable file)\n"); break;
case ET_EXEC: printf("EXEC (Executable file)\n"); break;
case ET_DYN:  printf("DYN (Shared object file)\n"); break;
case ET_CORE: printf("CORE (Core file)\n"); break;
default:      printf("Unknown\n"); break;
}
printf("  Entry point address:0x%08x\n", elf_header.e_entry);
return 0;
}
