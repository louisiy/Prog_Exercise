# HERE IS NOTE FOR C PROGRAMMING LANGUAGE

http://www.learntosolveit.com/index.html

## 1.1-1.3

function main must be included

integer division truncates: any fractional part is discarded.

if we augment each %d in the printf statement with a width, the numbers printed will be right-justified in their fields. For instance, we might say

```
printf("%3d %6d\\n", fahr, celsius);
```

to print the first number of each line in a field three digits wide, and the second in a field six digits wide,

The printf conversion specification %3.0f says that a floating-point number (here fahr) is to be printed at least three characters wide, with no decimal point and no fraction digits. %6.1f describes another number (celsius) that is to be printed at least six characters wide, with 1 digit after the decimal point.

This last change is an instance of a general rule - in any context where it is permissible to use the value of some type, you can use a more complicated expression of that type. Since the third argument of printf must be a floating-point value to match the %6.1f, any floatingpoint expression can occur here.

## 1.4

A #define line defines a symbolic name or symbolic constant to be a particular string of characters. Use it to let your code readable. Notice that there is no semicolon at the end of a #define line.

```
#define name replacement list
```

## 1.5

simplest : `getchar()`  `putchar()`

```c
#include
/* copy input to output; 1st version */
main()
{
int c;
c = getchar();
while (c != EOF) {
putchar(c);
c = getchar();
}
}
```

The precedence of `!=` is higher than that of `=`

`++` increment by 1

`--` decrement by 1

prefix & postfix form

`long` integers are at least 32 bits

The conversion specification `%ld` tells `printf` that the corresponding argument is a long integer.

The end of 1.5.2