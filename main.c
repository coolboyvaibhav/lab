#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    // printf("hello");
    int var = 10;
 
    // declare pointer variable
    int* ptr;
 
    // note that data type of ptr and var must be same
    ptr = &var;
 
    // assign the address of a variable to a pointer
    printf("Value at ptr = %p \n", ptr);
    printf("Value at var = %d \n", var);
    printf("Value at *ptr = %d \n", *ptr);
    return 0;
}
