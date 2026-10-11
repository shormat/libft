# libft

Personal C library written as part of the 42 school curriculum.
It reimplements part of the libc along with additional utility functions,
meant to be reused in later projects.

## Build

```sh
make        # build libft.a
make bonus  # add the linked list functions
make clean  # remove object files (*.o)
make fclean # remove libft.a and object files
make re     # fclean, then full rebuild
```

Compiled with `gcc -Wall -Wextra -Werror`.

## Usage

```c
#include "libft.h"

int main(void)
{
    char **words = ft_split("hello libft world", ' ');
    ft_putendl_fd(words[1], 1);
    return (0);
}
```

```sh
gcc main.c -L. -lft -o main
```

## Contents

### Part 1 — Libc functions

| Category    | Functions |
|-------------|-----------|
| Characters  | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| Memory      | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Strings     | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Conversion  | `ft_atoi` |

### Part 2 — Additional functions

| Function        | Description |
|-----------------|-------------|
| `ft_substr`     | Extracts a substring of `s` starting at `start`, of max length `len` |
| `ft_strjoin`    | Concatenates `s1` and `s2` into a new string |
| `ft_strtrim`    | Removes characters in `set` from the start and end of `s1` |
| `ft_split`      | Splits `s` on delimiter `c` into a `NULL`-terminated array |
| `ft_itoa`       | Converts an integer to a string |
| `ft_strmapi`    | Applies `f` to each character and returns a new string |
| `ft_striteri`   | Applies `f` to each character, in place |
| `ft_putchar_fd` | Writes a character to file descriptor `fd` |
| `ft_putstr_fd`  | Writes a string to `fd` |
| `ft_putendl_fd` | Writes a string followed by a newline to `fd` |
| `ft_putnbr_fd`  | Writes an integer to `fd` |

### Bonus — Linked lists

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function          | Description |
|-------------------|-------------|
| `ft_lstnew`       | Creates a new node holding `content` |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstadd_back`  | Adds a node at the end of the list |
| `ft_lstsize`      | Returns the number of nodes |
| `ft_lstlast`      | Returns the last node |
| `ft_lstdelone`    | Frees a single node using `del` |
| `ft_lstclear`     | Frees the whole list and sets the pointer to `NULL` |
| `ft_lstiter`      | Applies `f` to the content of each node |
| `ft_lstmap`       | Creates a new list by applying `f` to each content |

## Structure

```
.
├── Makefile
├── libft.h      # prototypes
├── ft_*.c       # one function per file
└── ft_*_bonus.c # bonus functions (linked lists)
```

## Author

shormat — 42
