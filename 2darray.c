#include<stdio.h>
#define ROW 2
#define COL 3
int main()
{
    int a[2][3]={10,20,30,40,50,60};//method 1
    int b[2][3]={{100,200,300},{400,500,600}};//method 2
    
    
    printf("%d",a[0][1]);//accesing zero row first colum
    printf("%d",a[1][0]);//accesing one row zero colum
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("address of a[%d][%d]=%p,value is=%d\n",i,j,&a[i][j],a[i][j]);
        }
    }
    printf("base address of array=%p,address of first element=%p\n",a,&a[0][0]);
}
