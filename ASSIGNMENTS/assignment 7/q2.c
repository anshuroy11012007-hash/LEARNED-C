//WACP TO CHECK WETHER A NUMBER IS A PRIME OR NOT USING RECURTION   
//WACP TO CALCULATE AREA OF CIRCLE, RECTANGLE, TRIANGLE USING FUNCTIONS
//WACP TO CREATE A FILE, WRITE A FILE.......
//WACP TO CREATE, INITIALISE, USE POINTERS 
//WACP TO ADD 2 NUMBERS USING POINTERS
//WACP TO INPUT AND PRINT ARRAY ELEMENTS USING POINTERS
//WACP TO REVERSE AN ARRAY USING POINTERS
//WACP THAT DEFINES A STRUCTURE TO STORE STUDENT DETAILS, NAME, ROLL NO. AND MARKS AND DISPLAY THE STORED INFORMATION
//WACP THAT PASSES A STRUCTURE VARIABLE TO A FUNCTION TO CALCULATE AND DISPLAY EMPLOYEE SALARY DETAILS 
//WACP USING STRUCTURES TO INPUT MARKS OF 5 SUBJECTS FOR A STUDENT AND COMPUTE THE TOTAL AND AVERAGE MARKS
//WACP THAT DEMONSTEATES THE USE OF STRUCTURES WITH POINTERS BY ACCESSING AND MODIFYING THE MEMBERS OF A STRUCTURE 
//    THROUGH STRUCTURE POINTER
//WACP THAT DEFINES A UNION AND DEMONSTRATES HOW ONLY 1 MEMBER CAN STORE A VALUE AT A TIME
// -- WACP THAT DEMONSTRATES THE CONCEPT OF DYNAMIC MEMORY ALLOCATION USING FUNCTIONS SUCH AS MALLOCK, CALLOCK, REALLOCK 
//    AND PRE FUNCTIONS TO ALLOCATE, DEALLOCATE AND REALLOCALT MEMORY AT A RUN TIME

#include<stdio.h>
int ar_circle(int r)
{
    return (3.14 * r * r);
}
int ar_rec(int l, int b)
{
    return (l * b);
}
int ar_tri(int b, int h)
{
    return  ( b * h  * 1/2);
}
int main()
{
    int num,circle,rect,num_1,num_2,num_3,num_4,tri;

    printf("please enter radius of circle\n");
    scanf("%d",&num);
    circle = ar_circle(num);
    printf("area of circle with radius as %d is %d\n",num,circle);


    printf("please enter length and breadth of rectangle\n");
    scanf("%d%d",&num_1,&num_2);
    rect = ar_rec(num_1, num_2);
    printf("area of rectangle with length and breadth as %d and %d is %d\n",num_1,num_2,rect);


    printf("please enter base and hight of triangle\n");
    scanf("%d\n%d",&num_3,&num_4);
    tri = ar_tri(num_3,num_4);
    printf("area of triangle with base and hight as %d and %d is %d\n",num_3,num_4,tri);
    return 0;;
}
