# 🪄 ft_printf
Because ft_putnbr() and ft_putstr() aren’t enough

### Goals:
- Learn use of variadic functions in C.
- Write a library that contains ft_printf(), a function that will mimic the original printf().

### Function prototype
``` c
int    ft_printf(const char *, ...);
```
### Requirements
• Don’t implement the buffer management of the original printf().
• The function has to handle the following conversions: cspdiuxX%
• The function will be compared against the original printf().
• Must use the command ar to create the library.
• Using the libtool command is forbidden.
• libftprintf.a has to be created at the root of the repository.

### Implement the following conversions:
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format. • %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
