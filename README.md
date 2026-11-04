*This project has been created as part of the 42 curriculum by azeroual.*

## Description
`libft` is the first project of the 42 curriculum[cite: 1, 3, 6]. The goal of this project is to build a custom C standard library containing re-implementations of essential `libc` functions, extra string/memory utilities, and a singly linked list data structure suite[cite: 1, 9, 11, 15].

This library serves as a foundational tool for C programming at 42, helping develop a deep understanding of low-level memory allocation, pointer mechanics, data structures, and compilation workflows using Makefiles[cite: 3, 4, 15].

---

## Library Functions & Specifications

### Part 1: C Standard Library Re-implementations[cite: 9]
* **Memory Management:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`[cite: 9]
* **String Analysis & Manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`[cite: 9]
* **Character Classification & Conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`[cite: 9]

### Part 2: Additional Utility Functions[cite: 11]
* **String Allocation & Splitting:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`[cite: 11, 12]
* **String Iteration & Mapping:** `ft_strmapi`, `ft_striteri`[cite: 13]
* **File Descriptor Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`[cite: 13, 14]

### Part 3: Singly Linked Lists (Mandatory)
The singly linked list structure defined in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;