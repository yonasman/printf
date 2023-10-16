#ifndef MAIN_H_
#define MAIN_H_
/*header files*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
/*function prototypes*/

int _putchar(char c);
int _printf(const char *format, ...);
void mynum(int num);
void myuni(unsigned int);
int num_digit(int num);
int binaryof(int num);
int octof(int num);
int hexi(int num);
int hexi_ptr(void *ptr);
int heXi(int num);
int printS(char *s);
#endif/*MAIN_H*/
