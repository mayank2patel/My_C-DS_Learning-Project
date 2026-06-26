# What I Learned Today

1. Why we need a Compiler.
1. How C source code is compiled to executable [CPU readable instructions].

---

```c 
#include<stdio.h>

int main(){
    printf("Hello, World!\n");
    return 0;
}
```

## Why we need a Compiler

Suppose we need to print Hello in our terminal but our CPU only understand 0's and 1's. Though we can write it in 0's and 1's for Hello but what if we need to calculate some big number we can't always write in 0's and 1's it's tedious task. Though you can write it if you have few screws loose.

*But* we can write in human readable format and then use another program to convert it into Machine codes. Yes, That where our Compiler comes in.

Writing C code in a file don't make it a C code it will remain a text file if we don't follow the syntax rules of C, save that file with .c extension and use a C compiler to convert it into an executable file that can be read by CPU.

## Source code -> executable

In this piece of code it prints : Hello, World!

- #include<stdio.h> : Is the Directive, It provide Declarations for the functions we are using.
- int main() : function named main -> The entry point of the program from where the OS will load the program step by step.
- printf("Hello, World!") : printf functions that we are using from stdio[Standard Input/Output Library] to print our string on terminal.
- return 0 : OS returns this integer when program is successfully executed.

--- 

Now we will look into how a source code is converted to executable code.

When we run compile our code by using this command : gcc -Wall -o hello hello.c

Here,

- gcc : Compiler we are using -> gcc [GNU C Compiler
- Wall : "Warn all" It's a compilation flag that gives us a broad sets of warning for code constructs.
- o : To specify the name of the output file. Without this if we compile our program it will always give a default executable called a.out
- hello : Name of our executable
- hello.c : Name of our program with .c extension

It takes 3 steps to compile and then give us our executable code.

1. Pre-Processing : The Pre-Processing only looks for line starting with '#', line starting with # is called directive. Directive hold the header files for the functions we are using in our code it's 'stdio.h'. Which holds the Declarations for that functions. When Pre-Processor start it will look for '#' after finding it, the Pre-Processor replace that directive with the actual code of the header file.
    
    - It will give us expanded C code.
    - To test it out write : gcc -E hello.c
    - The output of the Pre-Processing step is expanded C code(stdio.h header file + our program code)

2. Compiler : In this step the compiler takes the expanded C code and convert it into CPU instructions[Binary code/Machine code].

3. Linker : Take the Machine code and the C library(In this case our standard Library) which have the compiled code needed by our functions to work in our case printf compiled code is present in the C standard Library. Linker stitches everything and finally provide an executable file.


