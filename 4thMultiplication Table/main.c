#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number you want multiplication table of: ");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", a,i, a*i);
    }
    

    return 0;
}
