#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a = 10;
    float b = 25;
    
    //Arithmetic Operators
    printf("%d + %d = %d\n", a,b,a+b);
    printf("%d - %d = %d\n", a,b,a-b);
    printf("%d * %d = %d\n", a,b,a*b);
    printf("%f / %f = %f\n", a,b,a/b);
    // printf("%d \\% %d = %d\n", a,b,a%b);
    printf("------------------------------------------\n");
    
    //Relational Operator
    printf("%d\n", a==b);
    printf("%d\n", a<=b);
    printf("%d\n", a>=b);
    printf("%d\n", a<b);
    printf("%d\n", a>b);
    printf("%d\n", a!=b);
    
    printf("------------------------------------------\n");

    //Logical Operator
    printf("%d\n", a&&b);
    printf("%d\n", a||b);
    printf("%d\n", !a);

    printf("------------------------------------------\n");
    
    //Bitwise Operator
    int c = 10;
    int d= 56;
    printf("%d\n", c&d);
    printf("%d\n", c|d);
    printf("%d\n", c^d);
    
    printf("------------------------------------------\n");

    

    return 0;
}
