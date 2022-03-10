#include<stdio.h>
void main()
{
    static int arr[]={0,1,2,3,4};
    int *p[]={arr,arr+1,arr+2,arr+3,arr+4};
    int **ptr=p;
    ptr++;
    printf("\n%d %d %d",ptr-p,*ptr-arr,**ptr);
    *ptr++;
    printf("\n%d %d %d",ptr-p,*ptr-arr,**ptr);
    *++ptr;
    printf("\n%d %d %d",ptr-p,*ptr-arr,**ptr);
    ++*ptr;
    printf("\n%d %d %d",ptr-p,*ptr-arr,**ptr);

}
