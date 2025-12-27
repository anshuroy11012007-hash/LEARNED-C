#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[100]="Adrija";
    char arr2[100]="Ranjita";
    int count=strcmp(arr1,arr2);
    printf("%d\n",count);
    strcpy(arr1,arr2);
    printf("%s\n",arr1);
    strcat(arr1,arr2);
    printf("%s\n",arr1);
    int x= strlen(arr1);
    printf("%d",x);
    return 0;
}