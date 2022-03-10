#include<stdio.h>
#define ROW 2
#define COL 3
int main()
{
int mat[ROW][COL],i,j;
int *ptr;
ptr=&mat[0][0];
printf("enter number of elements[%d][%d]: \n",ROW,COL);
for(i=0;i<ROW;i++)
for(j=0;j<COL;j++)
scanf("%d",&mat[i][j]);
printf("the matrix entered is: \n");
for(i=0;i<ROW;i++)
{
    for(j=0;j<COL;j++)
    printf("%d",*(ptr+i*COL+j));
    printf("\n");

}
printf("\n");
}
