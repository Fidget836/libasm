#ifndef LIBASM_H
# define LIBASM_H

#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t ft_strlen(char *str);
char *ft_strcpy(char *dest, char *src);
ssize_t ft_strcmp(char *src1, char *src2);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);
char* ft_strdup( const char * source );

#endif