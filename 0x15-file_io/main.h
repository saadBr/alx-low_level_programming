#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int print_error(int n, char *file);
unsigned long int get_entry_point(unsigned long int ep, int data);
char *object_type(int o);
char *os_abi(int oa);
int checkfile(unsigned char *m, int f, char *filename);

#endif
