# Notes

There is a specially defined macro called EOF. A macro is one of those things you do with "#define" at the top of a program. e.g.:

`#define COUNT 5 <- **a macro**`

Basically any mentions of "COUNT" is replaced with the number '5' when the program runs through the code, and that is what a "macro" is.
EOF is a macro that returns a char that symbolizes the end of the file in a text file.
But there is no such representation for this "end-of-line" char, so it's not a part of the 255 combinations for a char. 
Thus, in order to return EOF along with all the possible chars, the following function has to return an 'int': fgetc(FILE *f).(* Had to remove italics)
This is also possible because char's are also ints, or can be expressed through int.

## How fgets() works

> [!NOTE]
> Can be read as "`f`ile `get` `s`tring"

Basically, `fgets()` takes the input of the `char *` variable (or string),
takes the size of the string-because you can't deduce it when you pass
the variable into an array-, and then takes the File it is reading from.

> [!NOTE]
> Must remember that ANY variable is "decayed" to a pointer when
> passed into an array. Thus, passing in JUST the string, will not
> allow for an accurate `sizeof()` operation. It will read 8 bytes
> instead of the actual size, because it will read the size of the pointer.

12/27/25

> [!NOTE]
> `scanf()` style functions are harzardous when it comes to *untrusted* input.
> They can overflow with input (overflowing the buffer) if you do not specify
> the field width (size) of `%s`. Also unsafe with numeric conversions, which
> is why `strtol() (= str to long int)` and `strtod() (= str to double)` exist.

`fscanf()`
- (FILE* filePtr, "`format specifiers (%s)`", &varForSpecifier1, &vFS2,...)
- returns an int to show all variabels successfully matched with a value
- returns 0 if there was input but not variables to put them in
- returns EOF if reached end-of-file

#### Printing Binary

- Common functions for writing to binary files (`.bin`) are `fwrite()` and `fread()`.
- When opening a `.bin` file (`fp = fopen("output.bin", "wb")`) we
need to add 'b' after 'r' or 'w' when reading or writing.
'b' = `binary`.

##### How `fread()` works

`fread(ptr to allocation, size of each byte, how many bytes to read at a time, FILE ptr)`

Essentially `fread()` returns the # of items it reads.
`fread()` distinguishes an item by the amount of bytes we specify:
- Bytes to read: `sizeOfEachItem` * `numOfItems`
- Returns: How many chunks of `sizeOfEachItem` bytes were read

Thus, if we have 6 items of 1 byte each, but instead we say 10...

```c
unsigned int bytes[6];
int result = fread(bytes, sizeof(char), **10**, fp);
// result = 6 because only 6 chunks of 1 byte were read.
```

#### Serializing binary data

```c
struct Person {
    char name[20];
    int age;
    double salary;
};

// Serialize: Write struct to file
struct Person p = {"Alice", 30, 75000.50};
FILE *fp = fopen("person.bin", "wb");
fwrite(&p, sizeof(struct Person), 1, fp);  // Convert to bytes
fclose(fp);

// Deserialize: Read struct from file
struct Person p2;
FILE *fp = fopen("person.bin", "rb");
fread(&p2, sizeof(struct Person), 1, fp);  // Reconstruct from bytes
fclose(fp);

printf("%s, %d, %.2f\n", p2.name, p2.age, p2.salary);
// Output: Alice, 30, 75000.50
```


