#include <stdio.h>

// //part 1
// //dummy structure
// struct str
// {
//     /* data */
// };

// //dummy function

// void func(int a,int b){
//     //printf("the value of a and b are %d and %d \n");

// }

void geeks()
{
    // Declare an array
    int val[3] = { 5, 10, 15 };
 
    // Declare pointer variable
    int* ptr;
 
    // Assign address of val[0] to ptr.
    // We can use ptr=&val[0];(both are same)
    ptr = val;
 
    printf("Elements of the array are: ");
 
    printf("%d, %d, %d", ptr[0], ptr[1], ptr[2]);
 
    return;
}

//main function

int main()
{
    /* code */

//     int a=10;
//     char c='g';
//     struct str x;

// // pointer definations of different types

//     int* ptr_int =&a;
//     char* ptr_char=&c;
//     struct str* ptr_str=&x;
//     void (*ptr_func)(int,int)=&func;
//     void* ptr_vn=NULL;


// // printing sizes
//     printf("Size of Integer Pointer  \t:\t%d bytes\n",
//            sizeof(ptr_int));
//     printf("Size of Character Pointer\t:\t%d bytes\n",
//            sizeof(ptr_char));
//     printf("Size of Structure Pointer\t:\t%d bytes\n",
//            sizeof(ptr_str));
//     printf("Size of Function Pointer\t:\t%d bytes\n",
//            sizeof(ptr_func));
//     printf("Size of NULL Void Pointer\t:\t%d bytes",
//            sizeof(ptr_vn));


  // Declare an array
    int v[3] = { 10, 100, 200 };
 
    // Declare pointer variable
    int* ptr;
 
    // Assign the address of v[0] to ptr
    ptr = v;
 
    for (int i = 0; i < 3; i++) {
 
        // print value at address which is stored in ptr
        printf("Value of *ptr = %d\n", *ptr);
 
        // print value of ptr
        printf("Value of ptr = %p\n\n", ptr);
 
        // Increment pointer ptr by 1
        ptr++;
    }
    geeks();

    



    return 0;
}
