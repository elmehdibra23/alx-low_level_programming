#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char *argv[]) {
FILE *source_file;
FILE *destination_file;
char buffer[1024];
size_t bytes_read;
if (argc != 3) {
fprintf(stderr, "Usage: cp file_from file_to\n");
exit(97);
}
source_file = fopen(argv[1], "r");
if (source_file == NULL) {
fprintf(stderr, "Error: Unable to read from file %s\n", argv[1]);
exit(98);
}
destination_file = fopen(argv[2], "w");
if (destination_file == NULL) {
fprintf(stderr, "Error: Unable to write to file %s\n", argv[2]);
fclose(source_file);
exit(99);
}
while ((bytes_read = fread(buffer, 1, sizeof(buffer), source_file)) > 0) {
fwrite(buffer, 1, bytes_read, destination_file);
}
fclose(source_file);
fclose(destination_file);
return 0;
}
