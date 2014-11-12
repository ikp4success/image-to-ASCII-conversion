image-to-ASCII-conversion
=========================

I. Overview:

In this assignment, you will write a program to perform a kind of image to ASCII conversion. 
Given a stream of image shading values and dimensions, the program you write will produce images shaded with ASCII text, like the one above. The following are some important details of what your program must do.
Your program's input will be an unbroken stream of numeral characters (from '0' to '8') acquired using getchar().
Your program will take two arguments: width and height of the output image (in that order).
Your program's output will be properly arranged (according to the given dimensions) lines of ASCII shading characters from the following palette:

input char
'0'
'1'
'2'
'3'
'4'
'5'
'6'
'7'
'8'
output char
' '
'.'
':'
'c'
'o'
'C'
'O'
'8'
'@'

If any input characters other than those listed here are encountered, your program should print an error message, then quit.

Your program's implementation must include the following features:
Your program must be compiled from 3 source files:
main.c (Handles input and output, as well as top-level program logic.)
shade.h (Declares the function shade, which converts from input char to output char as shown in the table above.)
shade.c (Defines the function shade, as declared in shade.h.)
Your shade.h file must contain the proper preprocessor directives to prevent multiple inclusion.  
The function shade must be declared exactly as follows.
return value: int, with 0 indicating failure (due to invalid input char), and nonzero indicating successful conversion.
first argument: char, containing the input character.
second argument: char *, containing a pointer to a variable in which the output character can be stored.  (This is a common method for cases like this, in which a function needs to "return" more than one value at a time.)
Your program must read image width and height from its arguments.  
Your program must display a usage message if the wrong number of arguments is used.
Note: There are two versions of the test input file provided (one for each background shade).  If your results will be viewed on a light background, use for_light_bg.txt as your input.  For results to be viewed on a dark background, use for_dark_bg.txt as your input.  Both of these input files should be used with values of 95 and 75 for the width and height respectively. 


II. Grading

Minimum Requirements
Correctly translate input numeral characters to ASCII shading characters, with proper formatting.
Proper declaration and definition of function shade, as described above.
Your work must be submitted in files with the following names:
main.c
shade.h
shade.c
These files must compile on a department LINUX machine with the following command :
gcc main.c shade.c -o p1
In addition, you must provide a README file to decribe the project. Please see the submission instruction for the requirement.
Graded Elements
Proper use of command line arguments in argv to acquire dimensions.
Proper use of argc to display usage when appropriate.
shade.h must use preprocessor directives to prevent multiple inclusion.
Proper use of pointers/addresses to "return" values from function shade.
Quit with error message if an improper input character is encountered.
A clear project description in the README file.
