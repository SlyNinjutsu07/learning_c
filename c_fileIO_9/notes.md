#### Notes

There is a specially defined macro called EOF. A macro is one of those things you do with "#define" at the top of a program. e.g.:

#define COUNT 5 <- **a macro**

Basically any mentions of "COUNT" is replaced with the number '5' when the program runs through the code, and that is what a "macro" is. 
EOF is a macro that returns a char that symbolizes the end of the file in a text file. 
But there is no such representation for this "end-of-line" char, so it's not a part of the 255 combinations for a char. 
Thus, in order to return EOF along with all the possible chars, the following function has to return an 'int': fgetc(FILE *f).(* Had to remove italics) 
This is also possible because char's are also ints, or can be expressed through int.


##### How fgets() works

Basically, fgets takes the input of the char * variable (or string),
takes the size of the string, because you can't deduce it when you pass
the variable into an array, and then takes the File it is reading from.

> [!NOTE]
> Must remember that ANY variable is "decayed" to a pointer when
> passed into an array. Thus, passing in JUST the string, will not
> allow for an accurate `sizeof()` operation. It will read 8 bytes
> instead of the actual size, because it will read the size of the pointer.

