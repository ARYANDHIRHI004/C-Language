#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Variables
        //1) Integer
    printf("Int takes %lu bytes\n ", sizeof(int));
    printf("char takes %lu bytes\n ", sizeof(char));
    printf("float takes %lu bytes\n ", sizeof(float));
    printf("double takes %lu bytes\n ", sizeof(double));
    printf("double takes %lu bytes\n ", sizeof(signed));
    
    return 0;
}