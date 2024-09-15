#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double A;
    double B;
    double C;
    double close;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);
  
    printf("Side C = %.2lf", C);
    
    printf("\nPress any Key to close it, Buddy!");
    scanf("%lf", close);

    //getchar();
    //system("pause");  

    return 0;
}