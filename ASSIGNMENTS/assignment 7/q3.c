#include<stdio.h>
#include<stdlib.h>
//to create a file
int main()
{
    FILE *fp;
    fp = fopen("data.text","w");
    if (fp == NULL)
    {
        printf("file couldn't be opened");
        exit (1);
    }
    fprintf(fp, "hello world.ln");
    fclose (fp);
    printf("data written successfully");
    return 0;
}