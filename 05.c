#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c, discriminant, root1 , root2;
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b*b - 4*a*c ;
    double s = 2*a;
    double sq = sqrt(discriminant);
    if (discriminant > 0) { root1 = (-b + (sq))/s ;
                          root2 =  (-b - (sq))/s ;
                          printf("root1 = %0.2lf and root2 = %0.2lf", root1, root2);}
    else if (discriminant==0) { root1 = -b/s ;
                              root2 = -b/s;
                              printf("root1 = root2 = %.2lf", root1);}
    else if (discriminant <0 ) { 
        
            double k = -b/s;
        double sq2 = sqrt(-discriminant);
                                 double k1 = sq2/s;
                                
                               printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi", k, k1, k,k1);}
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
