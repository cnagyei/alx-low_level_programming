#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_fd_source(int fd_source, char **argv);
void error_fd_dest(int fd_dest, char **argv);
void error_read_source(int read_source, char **argv);
void error_write_dest(int write_dest, char **argv);

#endif /* MAIN_H */
