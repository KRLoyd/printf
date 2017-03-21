# printf
A version of `printf` named `_printf ` created by Kristen Loyd and Wendy Segura.

`_printf`takes a pointer to a constant character as the first parameter, and a number of subsequent parameters. The first parameter contains conversion specifiers for the subsequent arguments. 

Function prints the specified arguments in a formatted style and returns the number of characters printed.

## Project Notes

### Style
All files are in the `Betty` style. Notes on this style can be found at https://github.com/holbertonschool/Betty/wiki

### Compilation
All files will be compiled with the following: `$ gcc -Wall -Werror -Wextra -pedantic *.c`

### Conversion Specifiers
The following conversion specifiers are handled with `_printf`:
* `%c`: single character
* `%s`: string of characters
* '%d`: signed integer
* `%i`: signedinteger 

## Files
* `README.md` : Current file, contains information about this project
* `holberton.h` : Header file, contains all prototypes for funcitons used, as well as libriaries.
* `_printf.c` : Contains the code for `_printf`
* `_putchar.c`: File for function that prints a character
* `pf_funcs.c`: File containing the specific functions for conversion specifiers
* `man_3_printf`: man page for our `_printf`
