#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int k;
    
    int fact=1;
    scanf("%d",&k);
    if (k<0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else if (k==0) {
        printf("Factorial of 0 = 1");
    }
    else if (k>0 && k<=500) {
        for (int i=1; i<=k; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d = %d", k, fact);}
    else { printf("Outside the range");}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
