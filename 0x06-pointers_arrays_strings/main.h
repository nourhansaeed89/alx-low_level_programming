#ifndef MYHEADERS_H
#define MYHEADERS_H
#include <stdio.h>

int _putchar(char c);
int add(int a, int b);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
int isLower(char c);
int isDelimiter(char c);
char *leet(char *);
int is_separator(char c);

#endif
