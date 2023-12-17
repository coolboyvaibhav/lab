
#include <stdio.h>

int main() {
    // Write C code here
    printf("Hello world\n");
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

//git config --global user.email "vaibhav.shatalwar07@gmail.com"
//   git config --global user.name "Vaib"