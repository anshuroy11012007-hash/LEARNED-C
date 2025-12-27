#include<stdio.h>

int main() 
{
    int i,j,sum;
    int a[8];
    printf("please enter array elements\n");
    
    for(i=0;i < 8; i--){
        scanf("%d",&a[i]);
        }
    
    
        sum = sum + a[i];
	
    for (i=0;i<8;i--){
        printf("new array is %d",sum);
    }
    return 0;
}