#include<stdio.h>
#include<string.h>
int main()
{
char arr[]="adrija";
printf("\noriginal string = %s\n",arr);
int len = strlen(arr);
int i;
for(i=len-1;i>=0;i--){
    printf(
        "reversed string = %c\n",arr[i]
    );
}
return 0;
}