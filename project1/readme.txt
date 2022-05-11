Normally, you would compile this collection of code by executing the following command:

gcc -o myprog main.c functions.c -I.

This compiles the two .c files and names the executable hellomake. 
The -I. is included so that gcc will look in the current directory (.) for the include 
file mylibrary.h. Without a makefile, the typical approach to the test/modify/debug cycle 
is to use the up arrow in a terminal to go back to your last compile command so you 
don't have to type it each time, especially once you've added a few more .c files to the mix.

Unfortunately, this approach to compilation has two downfalls. 

(1) First, if you lose the compile command or switch computers you have to retype 
it from scratch, which is inefficient at best. 
(2) Second, if you are only making changes 
to one .c file, recompiling all of them every time is also time-consuming and inefficient. 
So, it's time to see what we can do with a makefile.

----------------------------------------------------------------------------------------------------
The simplest makefile you could create would look something like:
Makefile 1

myprog: main.c functions.c
     gcc -o myprog main.c functions.c -I.

If you put this rule into a file called Makefile or makefile and then type make on the command 
line it will execute the compile command as you have written it in the makefile. 

- Note that make with no arguments executes the first rule in the file. 
- Furthermore, by putting the list of files on which the command depends on the first 
line after the :, make knows that the rule hellomake needs to be executed if any of those files change. 

Immediately, you have solved problem #1 and can avoid using the up arrow repeatedly, 
looking for your last compile command. However, the system is still not being efficient 
in terms of compiling only the latest changes.

One very important thing to note is that there is a tab before the gcc command in the makefile. 
There must be a tab at the beginning of any command, and make will not be happy if it's not there.

----------------------------------------------------------------------------------------
In order to be a bit more efficient, let's try the following:
Makefile 2

CC=gcc
CFLAGS=-I.

hellomake: main.o functions.o
     $(CC) -o myprog main.o functions.o $(FLAGS)

So now we've defined some constants CC and CFLAGS. It turns out these are special constants 
that communicate to make how we want to compile the files main.c and functions.c. 
In particular, the macro CC is the C compiler to use, and CFLAGS is the list of flags to pass 
to the compilation command. By putting the object files--main.o and functions.o--in the 
dependency list and in the rule, make knows it must first compile the .c versions individually, 
and then build the executable hellomake.

Using this form of makefile is sufficient for most small scale projects. However, there is one 
thing missing: dependency on the include files. If you were to make a change to hellomake.h, 
for example, make would not recompile the .c files, even though they needed to be. In order to 
fix this, we need to tell make that all .c files depend on certain .h files. We can do this by 
writing a simple rule and adding it to the makefile.
