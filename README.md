# Piscine_Reloaded

## Ex00 : Oh yeah, mooore...
exo.tar contains the following files and directories, which must output the following exactly as it is when you use the ls -l command in the exo directory:

## Ex01 : Z
A file called z that returns "Z", followed by a new line, whenever the cat command is used on it.

## Ex02 : clean
A command that will search for all files - in the current directory as well as in its sub-directories - with a name ending with ~, or with a name that starts and ends with #. The command will show and erase all files found.

## Ex03 : find_sh
A command that searches for all files that end with .sh in the current directory and all its sub-directories. It displays only the file names without the .sh.

## Ex04 : MAC
A command that displays your machine’s MAC addresses. Each address is followed by a line break.

## Ex05 : Can you create it ?
A file named "\?$*'KwaMe'*$?\" (which is actually QUITE annoying to make using only the command line ...).

## Ex06 : ft_print_alphabet
A function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter ’a’.  
> void ft_print_alphabet(void);

## Ex07 : ft_print_numbers 
A function that displays all digits, on a single line, by ascending order.
> void ft_print_numbers(void);

## Ex08 : ft_is_negative
A function that displays ’N’ (for negative) or ’P’ (for positive) depending on the integer’s sign entered as a parameter.
> void ft_is_negative(int n);

## Ex09 : ft_ft
A function that takes a pointer to int as a parameter, and sets the value "42" to that int.
> void ft_ft(int *nbr);

## Ex10 : ft_swap
A function that swaps the value of two integers whose addresses are entered as parameters.
> void ft_swap(int *a, int *b);

## Ex11 : ft_div_mod
A  function that divides parameter a by parameter b and stores the result in the int pointed by div. It also stores the remainder of the division of in the int pointed by mod.
> void ft_div_mod(int a, int b, int *div, int *mod);

## Ex12 : ft_iterative_factorial
An iterated function that returns a number - the result of a factorial operation based on the number given as a parameter. If there’s an error, the function returns 0.
> int ft_iterative_factorial(int nb);

## Ex13 : ft_recursive_factorial
A recursive function that returns the factorial of the number given as a parameter. If there’s an error it returns 0.
> int ft_recursive_factorial(int nb);

## Ex14 : ft_sqrt
A function that returns the square root of a number (if it exists), or 0 if the square root is an irrational number.
> int ft_sqrt(int nb);

## Ex15 : ft_putstr
A function that displays a string of characters on the standard output.
> void ft_putstr(char *str);

## Ex16 : ft_strlen
A function that reproduces the behavior of the function strlen.
> int ft_strlen(char *str);

## Ex17 : ft_strcmp
A function that reproduces the behavior of the function strcmp.
> int ft_strcmp(char *s1, char *s2);

## Ex18 : ft_print_params
A program that displays its given arguments.

## Ex19 : ft_sort_params
A program that displays its given arguments, except for argv[0], sorted by ascii order.

## Ex20 : ft_strdup
A function that reproduces the behavior of the function strdup.
> char *ft_strdup(char *src);

## Ex21 : ft_range
A function that returns an array of ints containing all the values between min (included) and max (excluded). If min’s value is greater or equal to max’s value, a null pointer is returned.
> int *ft_range(int min, int max);

## Ex22 :  ft_abs.h
A macro ABS which replaces its argument by its absolute value.
> #define ABS(Value)

## Ex23 : ft_point.h
A file that’ll compile the main included in the exercise folder.

## Ex24 : Makefile
A Makefile that’ll compile a libft.a library.

## Ex25 : ft_foreach
A function that applies a function on all elements of an array.
> void ft_foreach(int *tab, int length, void(*f)(int));

## Ex26 : ft_count_if
A function that returns the number of elements of an array that returns 1, passed to the function f.
> int ft_count_if(char **tab, int(*f)(char*));

## Ex27 : display_file
A program that displays, on the standard output, only the content of the file given as an argument. Error messages are displayed on their reserved output.
