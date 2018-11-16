#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a=0;
struct data
{
    char country[100];
    char capt[100];
};
struct data c[3];
void create()
    {   int i;
        for(i=0; i<3; i++)
        {
        printf("Enter name of Country:");
        scanf("%s",&c[i].country);
        printf("Enter Capital of the Country:");
        scanf("%s",&c[i].capt);
        }

    }
void display()
    {
        int i;
        for(i=0; i<3;i++)
        {
            printf("Country name:%s",&c[i].country);
            printf("Capital name:%s",&c[i].capt);
        }
    }
    int main()
    {
        char cont[100];
     char capt[100];
      do{
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Country to Capital\n");
        printf("4.Capital to Country\n");
		printf("5.Exit\n");
        scanf("%d",&a);
        switch (a)
        {
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:
            printf("Enter the country:");
            scanf("%s",&cont);
            int z;
            for(z=0;z<5;z++)
            {
            if(strcmp(c[z].country,cont)==0)

        {
          printf("Capital of %s is %s",c[z].country, c[z].capt);
        }
            }
          break;
          case 4:
          printf("Enter the Capital:");
          scanf("%s",&capt);
          int x;
          for(x=0;x<5;x++)
          {
          if(strcmp(c[x].capt,capt)==0)  
        {
            printf("Country of %s is %s",c[x].capt,c[x].country);
        }    
            }
        
      }
    }
    while(a!=5);
    }