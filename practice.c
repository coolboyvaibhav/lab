// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Next(a) (a+1)
#define cube(a) a*a*a


//glbal variable
// int total;

// int square(int x){
//     return x*x;
// }

// int squareOfSum(int x,int y){
//     return square(x+y);
// }

int* Add(int* a,int* b){

    //one way
    // int c;
    // c=(*a)+(*b);
    // int *p;
    // p=&c;
    // return p;

    //second way by using heap memory
    int* c=(int*)malloc(sizeof(int));
    *c=*a+*b;
    return c;

}

//call by value
// void increment(int x){
//     x=x+1;
//     // printf("address of local x =%d\t value at this address is %d\n",&x,x);
// }
// //call by refernce 
// void Increment(int *p){
    
//     *p=*p+1;
//     // printf("address of local p =%d\t value at this address is %d\n",p,*p);
// }

// int sumOfElements(int A[],int size){//here it is equivalent to  int * A i.e. creating pointer that points to the first element of the array 
//     int i,sum=0;
    
//     //printf("In sumOfElements function size of A =%d\n",sizeof(A));
//     for ( i = 0; i < size; i++)
//     {
//         /* code */
//         sum+=A[i];// A[i] is *(A+i)
//     }
//     return sum;
// }
// void doubleElements(int A[],int size){
//     for (int i = 0; i < size; i++)
//     {
//         /* code */
//         A[i]=2*A[i];
//     }
    
// }
// void print(char* C){
//     while (*C!='\0')
//     {
//         printf("%c",*C);
//         C++;
//     }
//     printf("\n");
    
// }

void Func(int* A[2][2]);

int main() {
    // Write C code here
    // printf("Hello world");
    /***************1 problem*/
    /*
    int i=10;
    int c=Next(i)*3;//i+1*3
    // int c=Next(i);
    printf("the value %d\n",c);
    */

    /***************2 problem*/
//    int j=2;
//    int d=cube(++j);
// //    int d=++j*++j;
//  ++j;
//       int d=++j;
     
//    printf("the cube of ++j is %d\n",d);
//    int d = ++j * ++j * ++j;
//          = ++2*++2*++2;
//          = 3*++3*++3;
//          =4*4*++4;
//          =16*++4;
//          =16*5;
//          =80;```

       /***************3 problem const variable can not be changed*/
    // const int cint=19;
    // printf("the constant values is %d\n",cint);
    // cint++;//this will give error

/***************video lecture*/

// int a=1;
// int* b=&a;
// printf("the address of a is %d\n",b );
// printf("*b is %d\n",*b );
// printf("&a is %d\n",&a );
// *b=12;
// printf("a is %d\n",a );


// ////pointer arithematic

// printf("the value of b+1 is %d\n",b+1);//increased by 4 bytes as integer has 4 bytes
// printf("the value of *(b+1) is %d\n",*(b+1));//value at address b+1//garbage value 


//pointer types ,pointer arithmetic  ,void pointers
// int a=1025;//00000000_00000000_00000100_00000001
// int* p=&a;
// printf("size of int is %d \n",sizeof(int));
// printf("Address =%d\t and value =%d\n",p,*p);
// char* p0;
// p0=(char*)p;//typecasting 
// printf("size of char is %d \n",sizeof(char));
// printf("Address =%d\t and value =%d\n",p0,*p0);//here since  it says it is pointer to char so it will find only one byte of binary form of 1025 which will give 1 value
// printf("Address =%d\t and value =%d\n",p0+1,*(p0+1));//00000000_00000000_00000100_00000001  second byte of this number

// //void pointer  -Generic pointer 
// void* p1;
// p1=p;//it does not require typecasting 
// printf("Address =%d\n ",p1);//dereferncing and pointer arithmetic not allowed in this void pointer



///Pointer to pointer 
// int x=5;
// int* p;
// p=&x;
// *p=6;
// int** q;
// q=&p;
// int*** r;
// r=&q;
// printf("*p=%d\n",*p);
// printf("*q=%d\n",*q);
// printf("*(*q)=%d\n",*(*q));
// printf("*r=%d\n",*r);
// printf("*(*r)=%d\n",*(*r));
// printf("*(*(*r))=%d\n",*(*(*r)));
// ***r=10;//manipulating value by double pointer
// printf("x=%d\n",x);
// **q=*p+2; //*p=x=10
// printf("x=%d\n",x);


/*****************pointer as function arguments-call by refernce*/
// int a=10;
// increment(a);  
// printf("address of  a =%d\t value at this address is %d\n",&a,a);
// Increment(&a);
// printf("address of  a =%d\t value at this address is %d\n",&a,a);

/*****************pointers and arrays***********************/
// int A[]={2,4,5,8,1};
// for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++)
// {
//     printf("address of A+%d is %d\n",i,A);
//     printf("address of A[%d] is %d\n",i,&A[i]);
//     printf("value of A[%d] is %d\n",i,A);
//     printf("value of A[i] is %d\n",i,&A[i]);
// }

/*****************arrays as function arguments***********************/

// int A[]={2,4,5,8,1};
// int size=sizeof(A)/sizeof(A[0]);
// int sum=sumOfElements(A,size);//A can be used as &A[0] here 
// printf("the sum of elements is %d\n",sum);
// //printf("In main function size of A =%d\n",sizeof(A));
// doubleElements(A,size);
// for (int i = 0; i < size; i++)
// {
//     /* code */
//     printf("%d\t",A[i]);
// }

/***************** character arrays and pointers ***********************/
//1)how to store strings   add library string.h
// size of array >=no of char in string +1 i.e \O for end of string
// "VAIB"
// 

//one way to define char array 
// char C[10];
// C[0]='V';
// C[1]='A';
// C[2]='I';
// C[3]='B';
// C[4]='\0';
// printf("%s\n",C);

// second way to define array 
// char C[]={'V','A','I','B'};

// THIRD way to define array 
// char C[]="VAIB";

// int len=strlen(C);
// printf("the length of char array is %d\n",len);

//2 Arrays and pointers are different types that are used in similar manner 
// char c1="Hello";
// char* c2;
// c2=c1;
// // printf("the value of c2 is %c\n",c2);//address
// printf("the value of c1[1] is %c\n",c1[1]);// 
// for (int i = 0; i < sizeof(c1)/sizeof(c1[0]); i++)
// {
//     /* code */
// }


//3 Arrays always passed to function by reference 
// char* C="VAIB";
// printf("%d",siz(C));

/***************** character arrays and pointers II ***********************/


/*****************  pointers and multidimensional arrays ***********************/
// int B[2][3]={{2,3,6},{4,5,8}};
 
// //B[0]; 1-D arrays of 3 integers 
// //B[1]//int *p =B;//wrong 
// int *p[3] ;
// p[3]=&B;
// printf("B=%d\t&B[0]=%d\n",B,&B[0]);
// printf("*B=%d\t B[0]=%d\t &B[0][0]=%d\n",*B,B[0],&B[0][0]);
// printf("B+1=%d\t &B[1]=%d\n",B+1,&B[1]);//12 bytes plus
// printf("*(B+1)=%d\t B[1]=%d\n",*(B+1),B[1]);
// printf("*(B+1)+2=%d\t B[1]+2=%d\t &B[1][0]=%d\n",*(B+1)+2,B[1]+2,&B[1][0]+2);
// printf("*(*B+1)=%d\n",*(*B+1));
// for (int i = 0; i < 2; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         // printf("%d\t",*(B[i]+j));
//         printf("%d\t",*(*(B+i)+j));
//     }
//     printf("\n");
// }
// 


/*****************  pointers and multidimensional arrays  ***********************/
//3d array
// int C[3][2][2]={{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};//C return int(*)[2][2]
// int* p[2][2];
// p[2][2]=&C;
// printf("C=%d\t *C=%d\t C[0]=%d\t C[0][0]=%d\t &C[0][0][0]=%d\n",C,*C,C[0],C[0][0],&C[0][0][0]);
// printf("*(C[0][1]+1)=%d\n",*(C[0][1]+1));
// Func(C);

/*****************  pointers and dynamic memory  ***********************/
/*
application memory
1)Heap-dynamic memory (Heap is one of data structure)
To use dynamic memory, we have to use 4 functions 
C-language =malloc,calloc,realloc,free

allocate block of memory-
a)malloc: void* malloc(size_t size)
b)calloc: void* calloc (numberOfElements num, size_t size)
it initializes all elements with 0  by default whereas in malloc it gives garbage value
c)realloc: void* realloc (void* ptr, size_t size)
deallocate block of memory- free

2 opearators
C++= new ,delete 

2)Stack-function calls and local variables
3)Static/Global
4)Code(Text)-Instructions

total--->Global
main()--->stack (Stack-Frame)
function squareOfSum()--->stack
function square()--->stack
*/

// int a=4,b=8;
// total=squareOfSum(a,b);
// printf("total=%d\n",total);


// int a;//goes on stack
// int* p;
// p=(int*)malloc(sizeof(int));//allocate memory in Heap of 4 bytes
// *p=10;
// free(p);//clearing the memory
// p=(int*)malloc(20*sizeof(int));// create a new memory location
// free(p);


/*****************  pointers as function returns  ***********************/
// int a=2,b=4;
// int* ptr=Add(&a,&b);
// printf("sum=%d\n",*ptr);


/*****************  pointers as function returns  ***********************/
int a=10;



return 0;
}