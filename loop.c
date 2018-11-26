#include<stdio.h>
char a[10];
int b = 0;
int main()
{
     printf("Enter something:");
     scanf("%s",a);
     while (b <10)
     {
         printf ("%s",a);
         b++; 
     }
     return 0;
}