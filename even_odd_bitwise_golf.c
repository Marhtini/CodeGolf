// Code Golf - C (GCC) - Even or Odd - 109 Bytes
// https://codegolf.stackexchange.com/questions/113448/is-this-even-or-odd/165883#165883

#include <stdio.h>
void main(){int n;scanf("%d",&n);if(n&1){printf("%d:True",n);}else{printf("%d:False",n);}}

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
* The code checks for Odd (True), and else Even.
*/