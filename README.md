# Libft

Libft is a project at 42 school where we recreate some of the standard C library functions. [read the subject](https://github.com/garenaud/libft/blob/master/libft.subject.pdf "libft subject")

## Description

This project is about creating our own library with standard C functions. The purpose is to understand them better and to use them in all our future C projects at 42 school.

## Functions

The library includes the following functions:

- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- String manipulation functions: `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`, `ft_strncat`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`, `ft_strcmp`, `ft_strncmp`
- Character check functions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- ASCII conversion functions: `ft_toupper`, `ft_tolower`
- Additional functions

## Installation

To use the library, clone the repository and compile it:

```bash
git clone https://github.com/yourusername/libft.git
cd libft
make
```
This will create a libft.a file which you can link to your projects.

## Usage
Include the header in your C files and compile your project with the library:
```bash
#include "libft.h"
```
```bash
gcc -L. -lft yourfile.c
```
