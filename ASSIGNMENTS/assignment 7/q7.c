#include <stdio.h>
#include <string.h>
int main()
{
    int i,n;
    char name[]="colour";
    printf("original string is %s\n",name);
    n= strlen(name);
    char *ptr ;
    ptr = name + (n - 1);
   printf("reversed string is: ");
   while (ptr>=name)
   {
    printf("%c",*ptr);
    ptr--;
   }
   printf("\n");
    return 0;
}