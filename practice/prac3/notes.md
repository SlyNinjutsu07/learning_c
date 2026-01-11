`main.c` was used to serialize a `struct Person` object and a `char *` into binary

`openf.c` was used to deserialize both. However I require the definition of the `struct Person` type within the same file.

1/11/25
Found error with the following in `openf2.c`

```c
  while (count < 128 && fread(&l[count], sizeof(int), 1, f) > 0) {
    printf("%d ", *l);
    count++;
  }
```

`*l` always points to `l[0]`. That's why it was always printing 1's.
I kind of copied the `*l` example from the book. Dang.
The fix is: `l[count]`
