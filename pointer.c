#include<stdio.h>
void swap(int*a,int*b);
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("X=%d\n",x);
    printf("Y=%d\n",y);
    return 0;
}
void swap(int*a,int*b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}