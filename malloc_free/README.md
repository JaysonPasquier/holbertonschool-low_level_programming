# Malloc, free

This directory contains projects and exercises related to dynamic memory allocation using `malloc` and `free` in C programming.

## Learning Objectives

- Understand how to use `malloc` and `free` for dynamic memory allocation.
- Learn how to handle memory allocation errors.
- Implement functions that use dynamic memory allocation.

## Files

- `0-create_array.c`: Function that creates an array of chars, and initializes it with a specific char.
- `1-strdup.c`: Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- `2-str_concat.c`: Function that concatenates two strings.
- `3-alloc_grid.c`: Function that returns a pointer to a 2 dimensional array of integers.
- `4-free_grid.c`: Function that frees a 2 dimensional grid previously created by `alloc_grid`.

## Usage

To compile any of the files, use the following command:
```sh
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output_name>
```

To run the compiled program:
```sh
./<output_name>
```

## Author

This project was completed by [Your Name].
