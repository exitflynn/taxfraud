#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
    int k, s;
    scanf("%d %d", &k, &s);
   if (k>1 && k<20) {for (int i= 1; i<=s ; i++) {
        int k2 = k * i;
        printf("%d * %d = %d", k , i , k2);
        printf("\n");} }
                     else {printf("Outside the range");}
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
