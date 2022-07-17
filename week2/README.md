## Week 2 - Arrays

- "clang" is a compiler -> transforms the source code into machine code (i.e. binary code) so that the computer can run the code.
  - in week 1, we used "make"
  - while clang is the compiler used by C, we have to write extra commands to rename, import functions from another library, etc... the whole process becomes tedious as our program gets bigger and more complex. "make" abstracts the whole process from us.


- when we say "compile our code", we're only describing one process of the transformation from source code to machine code.
  - The others are preprocessing, assembling, and linking.
  - pre-processing: this is the step where the code is "primed". it finds and replaces the hash symbols before the include.
  - compiling: transforming source code into assembly language before 0s and 1s.
  - assembling: the actual conversion to 0s and 1s
  - linking: combines the binary code from each source code used.

### Debugging
 - A bug is an error in code.
 - A common debugging tool used in C is "printf" - similar to console.log in JavaScript.
 - VSCode has a built in debugger as well that allows to see the execution of the source code at our own pace.

### Arrays
- an array that allows for storing multiple data in one variable.
- In C, we have to specifiy what data type the array will hold and how many.
  - i.e int array_name[ number of data types ].