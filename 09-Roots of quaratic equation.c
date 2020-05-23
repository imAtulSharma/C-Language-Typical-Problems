//Programme to find roots of quadratic equation of the type ax^2 + bx + c = 0

#include<stdio.h>
#include<math.h>

void main(){
    int a, b, c, Det;
    float root1, root2;
    
    printf("Enter the coffecients of x^2 in the equation...\n");
    scanf("%d", &a);
    
    printf("Enter the coffecients of x in the equation...\n");
    scanf("%d", &b);
    
    printf("Enter the constant term in the equation...\n");
    scanf("%d", &c);

    Det = (b*b)-(4*a*c);
    
    if(Det >= 0){
        printf("The roots are real\n");
        root1 = (float)(-b + sqrt(Det))/(2*a);
        root2 = (float)(-b - sqrt(Det))/(2*a);
        printf("The roots are %.1f and %.1f", root1, root2);
    }
    else
    {
        printf("The roots are imaginary");
    }

}