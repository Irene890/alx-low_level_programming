# 0x15. C - File I/O
In C programming, you can use the I/O system calls open, close, read, and write to perform file operations. These functions are commonly used for handling file input and output

1) **open function** is used to open a file and obtain a file descriptor.
2) **close function** is used to close an open file descriptor.
3) **read function** is used to read data from an open file descriptor.
4) **write function** is used to write data to an open file descriptor.

In C programming, the flags **O_RDONLY**, **O_WRONLY**, and **O_RDWR** are constants used with the open system call to specify the access mode when opening files. These flags determine whether the file should be opened for reading, writing, or both. These flags are part of the <fcntl.h> header file. 

### O_RDONLY (Read-Only):
This flag is used to open a file for reading only.
### O_WRONLY (Write-Only):
This flag is used to open a file for writing only
### O_RDWR (Read and Write):
This flag is used to open a file for both reading and writing.

## Tasks
0. Tread lightly, she is near

1. Under the snow
Create a function that creates a file.

2. Speak gently, she can hear
Write a function that appends text at the end of a file.

3. cp
Write a program that copies the content of a file to another file.
