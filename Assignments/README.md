# C 

This repository contains assignments done by me during my C course (4 weeks).

## Assignment 1


### Exercise 00: vc_print_alphabet

Create a function that displays the alphabet in lowercase, on a single line, by ascending order, starting
from a letter 'a'.

#### Allowed functions

```
putchar
```

#### Related files

```
vc_print_alphabet.c
```
<br>


### Exercise 01: vc_print_reverse_alphabet

Create a function that displays the alphabet in lowercase, on a single line, by descending order, starting
from the letter ’z’.

#### Allowed functions

```
putchar
```

#### Related files

```
vc_print_reverse_alphabet.c
```
<br>


### Exercise 02: vc_print_numbers

Create a function that displays all digits, on a single line, by ascending order.

#### Allowed functions

```
putchar
```

#### Related files

```
vc_print_numbers.c
```
<br>

### Exercise 03: vc_is_negative

Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter. If n is
negative, display ’N’. If n is positive or null, display ’P’.

#### Allowed functions

```
putchar
```

#### Related files

```
vc_is_negative.c
```
<br>


### Exercise 04: vc_print_comb

Create a function that displays all different combinations of three different digits in ascending order, listed
by ascending order - yes, repetition is voluntary.

```
$ ./your_program | cat -e 012, 013, 014, 015, 016, 017..., 789$
```

#### Allowed functions

```
putchar
```

#### Related files

```
vc_print_comb.c
```
<br>

### Exercise 05: vc_print_comb2

Create a function that displays all different combinations of two digits between 00 and 99, listed by
ascending order.

```
$ ./your_program | cat -e
00 01, 00 02, 00 03, 00 04, 00 55, ..., 00 99, 01 02, ..., 97 99, 98 99$
```

#### Allowed functions

```
putchar

```

<br>

### Exercise 06: vc_putnbr

Create a function that displays the number entered as a parameter. The function has to be able to display
all possible values within an 
int type variable

```
vc_putnbr(88) displays "88"
```

#### Allowed functions

```
putchar
```

#### Related files

```
vc_putnbr.c
```
<br>


### Exercise 07: vc_print_combn

Create a function that displays all different combinations of 
n numbers by ascending order.

n will be so that : 0 < n < 10

If n = 2, here's the expected output:

```
$ ./your_program | cat -c
01, 02, 03, ..., 09, 12, ..., 79, 89$
```

#### Allowed functions

```
putchar
```

#### Related files

```
vc_putnbr.c
```

<br>
<br>
<br>


## Assignment 2


### Exercise 00: vc_pt

Create a function that takes a pointer to int as a parameter, and sets the value "77" to that 
int
.

#### Allowed functions

```
none
```

#### Related files

```
vc_pt.c
```
<br>

### Exercise 01: vc_pt

Create a function that takes a pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to int as a parameter and sets the value "77" to that int.
#### Allowed functions

```
none
```

#### Related files

```
vc_ultimate_pt.c
```
<br>

### Exercise 02: vc_swap

Create a function that swaps the value of two integers whose addresses are entered as parameters.
#### Allowed functions

```
none
```

#### Related files

```
vc_swap.c
```
<br>

### Exercise 03: vc_div_mod

Create a function that divides parameters 
a by b and stores the result in the int pointed by div . It also
stores the remainder of the division of a by b in the int pointed by mod.
#### Allowed functions

```
none
```

#### Related files

```
vc_div_mod.c
```
<br>

### Exercise 04: vc_ultimate_div_mod

Create a function that divides parameters a by b. The result of this division is stored in the int pointed by a. The remainder of the division is stored in the int pointed by b.
#### Allowed functions

```
none
```

#### Related files

```
vc_ultimate_div_mod.c
```
<br>

### Exercise 05: vc_putstr

Create a function that displays a string of characters on the standard output
#### Allowed functions

```
putchar
```

#### Related files

```
vc_putstr.c
```
<br>

### Exercise 06: vc_strlen

Create a function that counts and returns the number of characters in a string.
#### Allowed functions

```
none
```

#### Related files

```
vc_strlen.c
```
<br>

### Exercise 07: vc_strrev

Create a function that reverses the order of characters in a string.

It has to return str

```
a => a
ab => ba
abcde => edcba
```
#### Allowed functions

```
none
```

#### Related files

```
vc_strrev.c
```
<br>

### Exercise 08: vc_atoi

Reproduce the behavior of the function 
atoi.

#### Allowed functions

```
none
```

#### Related files

```
vc_atoi.c
```
<br>

### Exercise 09: vc_sort_int_table

Create a function which sorts an array(table) of integers by ascending order.

The arguments are a pointer to int and the number of ints in the array
#### Allowed functions

```
none
```

#### Related files

```
vc_sort_int_table.c
```
<br>

## Assignment 3


### Exercise 00: vc_iterative_factorial

Create an iterated function that returns a number. This number is the result of a factorial operation based
on the number given as a parameter.

#### Allowed functions

```
none
```

#### Related files

```
vc_iterative_factorial.c
```
<br>
### Exercise 01: vc_recursive_factorial

Create an recursive function that returns the factorial of th number given as a parameter

#### Allowed functions

```
none
```

#### Related files

```
vc_recursive_factorial.c
```
<br>
### Exercise 02: vc_iterative_power

Create an iterated function that returns the value of a power applied to a number. An power lower than 0
returns 0. Overflows don’t have to be handled.

#### Allowed functions

```
none
```

#### Related files

```
vc_iterative_power.c
```
<br>
### Exercise 03: vc_recursive_power

Create a recursive function that returns the value of a power applied to a number

#### Allowed functions

```
none
```

#### Related files

```
vc_recursive_power.c
```
<br>
### Exercise 04: vc_fibonacci

Create a function ft_fibonacci that returns the n-th element of the Fibonacci sequence, the first element
being at the 0 index. We’ll consider that the Fibonacci sequence starts like this: 0, 1, 1, 2.

#### Allowed functions

```
none
```

#### Related files

```
vc_fibonacci.c
```
<br>
### Exercise 05: vc_sqrt

Create a function that returns the square root of a number (if it exists), or 0 if the square root is an irrational
number.

#### Allowed functions

```
none
```

#### Related files

```
vc_sqrt.c
```
<br>
### Exercise 06: vc_is_prime

Create a function that returns 1 if the number given as a parameter is a prime number, and 0 if it isn’t

#### Allowed functions

```
none
```

#### Related files

```
vc_is_prime.c
```
<br>
### Exercise 06: vc_find_next_prime

Create a function that returns the next prime number greater or equal to the number given as argument.

#### Allowed functions

```
none
```

#### Related files

```
vc_find_next_prime.c
```
<br>

## Assignment 4


### Exercise 00: vc_strcpy

Reproduce the behavior of the function strcpy.

#### Allowed functions

```
none
```

#### Related files

```
vc_strcpy.c
```
<br>
### Exercise 01: vc_strncpy

Reproduce the behavior of the function strncpy.

#### Allowed functions

```
none
```

#### Related files

```
vc_strncpy.c
```
<br>
### Exercise 02: vc_strstr

Reproduce the behavior of the function strstr.

#### Allowed functions

```
none
```

#### Related files

```
vc_strstr.c
```
<br>
### Exercise 03: vc_strcmp

Reproduce the behavior of the function strcmp.

#### Allowed functions

```
none
```

#### Related files

```
vc_strcmp.c
```
<br>
### Exercise 04: vc_strncmp

Reproduce the behavior of the function strncmp.

#### Allowed functions

```
none
```

#### Related files

```
vc_strncmp.c
```
<br>
### Exercise 05: vc_strupcase

Create a function that transforms every letter of every word to uppercase.

#### Allowed functions

```
none
```

#### Related files

```
vc_strupcase.c
```
<br>
### Exercise 06: vc_strlowcase

Create a function that transforms every letter of every word to lowercase.

#### Allowed functions

```
none
```

#### Related files

```
vc_strlowcase.c
```
<br>
### Exercise 07: vc_strcapitalize

Create a function that capitalizes the first letter of each word and transforms all other letters to lowercase.

#### Allowed functions

```
none
```

#### Related files

```
vc_strcapitalize.c
```
<br>
<br>
<br>
<br>

## Developed with

* [Visual Studio Code](https://code.visualstudio.com/) - My choice of text editor

## Author

[Marcelo Longen](http://www.marcelolongen.com) - Student at [CICCC](http://www.ciccc.ca)

