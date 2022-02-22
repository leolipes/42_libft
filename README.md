## List of functions:

### Functions from `<ctype.h>` library

* [`ft_isascii`](sources/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](sources/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](sources/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](sources/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](sources/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](sources/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](sources/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](sources/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](sources/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](sources/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](sources/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](sources/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](sources/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](sources/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](sources/ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](sources/ft_strlen.c)				- find length of string.
* [`ft_strchr`](sources/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](sources/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](sources/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](sources/ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strdup`](sources/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](sources/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](sources/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_itoa`](sources/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](sources/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](sources/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](sources/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](sources/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](sources/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](sources/ft_striteri.c)			- 
* [`ft_putchar_fd`](sources/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](sources/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](sources/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](sources/ft_putnbr_fd.c)		- output integer to given file.

### Linked list functions (bonus)

* [`ft_lstnew`](sources/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](sources/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](sources/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](sources/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](sources/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](sources/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](sources/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](sources/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](sources/ft_lstmap.c)				- apply function to content of all list's elements into new list.
