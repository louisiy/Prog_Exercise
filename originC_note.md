## HERE IS NOTE FOR *C PROGRAMMING LANGUAGE*

function main must be included

integer division truncates: any fractional part is discarded.

if we augment each %d in the printf statement with a width, the numbers printed will be right-justified in their fields. For instance, we might say *printf("%3d %6d\n", fahr, celsius);* to print the first number of each line in a field three digits wide, and the second in a field six digits wide,

The printf conversion specification %3.0f says that a floating-point number (here fahr) is to be printed at least three characters wide, with no decimal point and no fraction digits. %6.1f describes another number (celsius) that is to be printed at least six characters wide, with 1 digit after the decimal point.

This last change is an instance of a general rule - in any context where it is permissible to use the value of some type, you can use a more complicated expression of that type. Since the third argument of printf must be a floating-point value to match the %6.1f, any floatingpoint expression can occur here.



last time at the end of 1.3
