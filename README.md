# libft
a useful library in C programming language
# libft

## Description

**libft** is a personal C library that reimplements common standard C functions and adds useful utility functions. This project is part of the 42 curriculum and is meant to strengthen understanding of C, memory management, and basic algorithms.

## Features

* Reimplementation of standard libc functions
* String manipulation utilities
* Memory handling functions
* Linked list utilities (bonus part)

## Functions

The library includes functions such as:

* `ft_strlen`, `ft_strdup`, `ft_strjoin`
* `ft_memset`, `ft_memcpy`, `ft_calloc`
* `ft_atoi`, `ft_isalpha`, `ft_isdigit`
* Linked list functions like `ft_lstnew`, `ft_lstadd_back`, `ft_lstclear`

## Installation

Clone the repository and compile the library:

```bash
make
```

This will generate `libft.a`.

## Usage

Include the header in your C project and link the library:

```c
#include "libft.h"
```

Compile example:

```bash
gcc main.c -L. -lft
```

## Makefile Rules

* `make` : compile the library
* `make clean` : remove object files
* `make fclean` : remove object files and `libft.a`
* `make re` : recompile everything

## Author

Made by Yves TUMUKUNDE

## Notes

This project is for educational purposes and follows the
