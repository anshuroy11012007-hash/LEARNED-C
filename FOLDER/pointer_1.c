#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    int arr=12;
    int *ptr=&arr;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
     int* ptr1 = (int*)malloc(sizeof(int));
     //malloc(...): This is the "memory allocation" function. //
     //You are calling this function and telling it, "Please give me a block of memory//
    free (ptr1);
    printf("memory freed\n");
    ptr1=NULL;
    return 0;
}