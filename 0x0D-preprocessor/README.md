# 0x0D. C - Preprocessor

# Description
This project in the Low Level Programming series is about:
* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files

# Files:
* 0-Object-like Macro: A header file that defines a macro named SIZE as an abbreviation for the token 1024.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
* 1-pi.h: A header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
* 2-main.c: A program that prints the name of the file it was compiled from, followed by a new line.
You are allowed to use the standard library.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o cc
Then you can try and create a copy of 2-main to 02-main.c then 
recompile this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
* 3-function_like_macro.h:  A function-like macro ABS(x) that computes the absolute value of a number x.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
* 4-sum.h: A function-like macro SUM(x, y) that computes the sum of the numbers x and y.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
