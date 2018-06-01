// Code Golf - C (GCC) - Even or Odd - 82 Bytes
// https://codegolf.stackexchange.com/questions/113448/is-this-even-or-odd/165883#165883
// This version only returns 0 for Odd and 1 for Even, removing the need for the printf() function.

#include <stdio.h>
int main(){int n;scanf("%d",&n);if(n&1)return 0;else return 1;}
