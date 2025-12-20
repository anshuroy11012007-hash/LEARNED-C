#include <stdio.h>
int main()
//find largest of 3 numbers//    
{
   int a,b,c;
   printf("enter a");
    scanf("%d",&a);
     printf("enter b");
    scanf("%d",&b);
      printf("enter c");
      scanf("%d",&c);
    if (a>b) {
        if (a>c) {
            printf("a is largest of 3 numbers\n");}
            else{
                printf("c is largest of 3 numbers\n");
            }
        }
        //only space or enter can be used while typing and giving input in scanf condition//
        else{

            if (b>c) {
                    printf("b is largest of 3 numbers\n");
                }
                else{
                    printf("c is largest of 3 numbers\n");
                }
                
            }
            return 0;
        }

    
        
    
