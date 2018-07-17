/* HackerRank Digit Frequency Counter (C Programming) - My Solution
* https://www.hackerrank.com/challenges/frequency-of-digits-1/
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char* inputString[100];
    char checkForString[] = "0123456789";
    fgets(inputString,100,stdin);
 
    frequency(inputString,checkForString);
    
    return 0;
}

void frequency(char* pInputString, char* pCheckFor){
    int i,j,k, iLength, jLength;
    int howManyInstances[] = {0,0,0,0,0,0,0,0,0,0,0};
    iLength = strlen(pInputString) - 1;
    jLength = strlen(pCheckFor) - 1;
    
    for(i=0;i<=iLength;i++){
        for(j=0;j<=jLength;j++){
            if(pInputString[i]==pCheckFor[j]){
                if(pCheckFor[j] != '\0'){
                    howManyInstances[j]+=1;
                }
                else{;}
            }
            else{;}
        }
    }
    
    for(k=0;k<=9;k++){
        printf("%d ",howManyInstances[k]);
    }
    
}
