#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
int _strlen(char *str);
int create_file(const char *filename, char *text_content);

#endif
