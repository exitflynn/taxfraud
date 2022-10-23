#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { int k;
            scanf("%d",&k);
            if (k>0 && k<10)
            {for(int i=1 ; i<=k ; i++) { 
                for( int j =1; j<=i ; j++) { printf("%d ",i);}
                printf("\n");} }
            else {printf("Outside the range");}
                
            

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
