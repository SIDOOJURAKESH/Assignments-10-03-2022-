#include<stdio.h>
#define SIZE 2
#define ROW 3
#define COL 2
int main()
{
int mat[SIZE][ROW][COL],i,j,k;
int (*ptr)[ROW][COL];
ptr=mat;
printf("enter number of elements[%d][%d][%d]: \n",SIZE,ROW,COL);
for(k=0;k<SIZE;k++)
{
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&mat[k][i][j]);
        }
    }
}
printf("the matrix entered is: \n");
for(k=0;k<SIZE;k++)
{
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            
            printf("%d ",*(*(*(ptr+k)+i)+j));//we can also acces  ptr[k][i][j]
        }
        printf("\n");
    }
    printf("\n");
}
return 0;
}

