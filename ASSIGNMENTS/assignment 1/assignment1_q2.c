#include <stdio.h>
#include <string.h> 
int main()
{
    int roll_no, batch, year;
    char name[20] = "Adrija";
    char branch[20] = "ECE";
    roll_no = 42;
    batch = 3;
    year = 2025;
    printf("name of the student is:%s\n", name);
    printf("She belong's to the branch:%s\n", branch);
    printf("Her roll no. is:%d\n", roll_no);
    printf("She is in college's %d batch and is in her 1st year in %d", batch, year);
    return 0;
}

