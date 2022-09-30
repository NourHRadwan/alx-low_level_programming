# 0x09-static_libraries
# Description
This project in the Low Level Programming series is about:

What is a static library, how does it work, how to create one, and how to use it
Basic usage of ar, ranlib, nm

create_static_lib.sh: 
creates a static library called liball.a from all the .c files
libmy.a:
static library created including all function prototypes in coding.h file
# How to compile

Static libary is compiled with the following commands: ar -t <library.a> nm <library.a>
gcc using the flags -Wall -Werror -Wextra and -pedantic
