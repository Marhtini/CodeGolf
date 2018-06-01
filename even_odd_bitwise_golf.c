// Code Golf - C (GCC) - Even or Odd - 109 (NOW 99) Bytes
// https://codegolf.stackexchange.com/questions/113448/is-this-even-or-odd/165883#165883
// Edit: Removed braces for IF statements and returning 0 and 1 instead of true or false: 99 bytes down from 109.

#include <stdio.h>
void main(){int n;scanf("%d",&n);if(n&1)printf("%d:1",n);else printf("%d:0",n);}

/*
* A brief explanation:
*
* Originally, I was going to use the printf() prototype instead of including stdio.h. 
* However, the need for scanf() to take input ruined the C minimalism a bit. :)
*
* First we initialize an integer "n", our number we're checking parity for. 
* Then we scanf() for the user to enter the value of n. 
* Since we are able to determine if a number is odd or even by determining if it's first bit (farthest to the right, lowest) is set or unset (1 or 0). 
* In this case, a bit set to 1 means the number is odd, whereas a bit set *to 0 means the number is even. 
* The code checks for Odd (0 or True), and else Even (1 or False).
* Using the Truthyness guide from Stack Exchange as guidance for setting Truthy values. In this challenges, 0 and 1 are legal
* values for True and False.
*/
