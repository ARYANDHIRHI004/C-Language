#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age<18)
    {
        printf("You are not eligible for vote...");
    }
    else if(age> 100){
        printf("You are Too old...");
    }
    else{
        printf("You can vote...");
    }
    return 0;
}
