# Libft

A custom implementation of selected standard C library functions.  
This project is part of the 42 curriculum and aims to help understand how the standard library works by rebuilding it from scratch.

---

## 🧠 Overview

Libft is a personal C library that reimplements common standard functions such as memory handling, string manipulation, and character checks.  
The goal is to provide a strong foundation for future 42 projects by mastering low-level C programming.

---

## ⚙️ Compilation

To compile the library, run:

```bash
make
```
This will create a static library file:
```bash
libft.a
```
We can then include it in our C projects using:
```bash
#include "libft.h"
```
and compile with:
```bash
gcc -Wall -Wextra -Werror your_file.c libft.a -o your_program
```

## 📚 Functions

### Memory

- `ft_memset`

- `ft_bzero`

- `ft_memcpy`

- `ft_memmove`

- `ft_memchr`

- `ft_memcmp`

- `ft_calloc`

### Strings

- `ft_strlen`

- `ft_strdup`

- `ft_strlcpy`

- `ft_strlcat`

- `ft_strchr`

- `ft_strrchr`

- `ft_strncmp`

- `ft_strnstr`

- `ft_substr`

- `ft_strjoin`

- `ft_strtrim`

- `ft_split`

- `ft_itoa`

- `ft_strmapi`

- `ft_striteri`

### Characters

- `ft_isalpha`

- `ft_isdigit`

- `ft_isalnum`

- `ft_isascii`

- `ft_isprint`

- `ft_toupper`

- `ft_tolower`

### File Descriptors

- `ft_putchar_fd`

- `ft_putstr_fd`

- `ft_putendl_fd`

- `ft_putnbr_fd`

## 🧩 Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, world!";
    printf("Length: %zu\n", ft_strlen(str));
    printf("Duplicate: %s\n", ft_strdup(str));
    return 0;
}
```
Compile and run:
``` bash
gcc -Wall -Wextra -Werror main.c libft.a -o test && ./test
```

## 💡 Author
👨‍💻 ncourtoi

