*This project has been created as part of the 42 curriculum by zeanass.*

## Description
**Libft** (Library of Functions) is a foundational project at 42 School. The goal of this project is to recreate a custom C library containing highly useful standard functions from the C library (libc), along with additional utility functions for string manipulation, memory management, and linked lists. 

Since C programming can be tedious without access to standard functions, this project provides a deeper understanding of how these core functions work under the hood, particularly regarding memory allocation (`malloc`, `free`) and pointer arithmetic. This library (`libft.a`) will serve as a crucial building block and allowed tool for future C school assignments in the curriculum.

## Library Details
The library is divided into three main components, all strictly adhering to the Norm:

**Part 1: Libc Functions**
Reimplementations of standard C library functions with the `ft_` prefix. 
*   **Memory:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
*   **String/Char:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
*   **Classification & Transformation:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`

**Part 2: Additional Functions**
Utility functions not natively included in libc, designed to simplify string and file descriptor operations.
*   **String Manipulation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
*   **Conversion:** `ft_itoa`
*   **File Descriptor Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**Part 3: Linked List Functions**
A set of functions designed to manipulate a custom singly linked list data structure (`t_list`).
*   **Creation & Addition:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
*   **Traversal & Measurement:** `ft_lstsize`, `ft_lstlast`
*   **Deletion & Memory Clearing:** `ft_lstdelone`, `ft_lstclear`
*   **Iteration & Mapping:** `ft_lstiter`, `ft_lstmap`

## Instructions

### Compilation
The project includes a `Makefile` that compiles the source files into a static library (`libft.a`) using `cc` with the flags `-Wall -Wextra -Werror`. 

Available commands:
*   `make` or `make all`: Compiles the entire library and creates `libft.a`.
*   `make clean`: Removes all compiled object files (`.o`).
*   `make fclean`: Removes all compiled object files and the `libft.a` binary.
*   `make re`: Fully cleans and recompiles the library.

### Execution & Usage
To use this library in your own projects:
1. Include the header in your `.c` files: `#include "libft.h"`
2. Compile your files alongside the library:
   ```bash
   cc -Wall -Wextra -Werror my_program.c -L. -lft -o my_program