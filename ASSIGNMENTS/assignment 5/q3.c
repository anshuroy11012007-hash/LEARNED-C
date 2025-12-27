#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "RACECAR";
    printf("%s ",str);
    int i=0||1||2;
    int a=strlen(str);
    int j= a-1||a - 2|| a- 3;
    int IS_PALLINDROME =1;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            IS_PALLINDROME = 0;
            break;
        }
    }
    if (IS_PALLINDROME==1)
    {
        printf("is a pallindrome");
    }
    else {
        printf("not a pallindrome");
    }
    return 0;
}