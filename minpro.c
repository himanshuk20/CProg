#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a;
struct data
{
    char country[100];
    char capt[100];
};
struct data c[5];
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
            printf("Country name:%s\n",&c[i].country);
            printf("Capital name:%s\n",&c[i].capt);
        }
    }
     main()
    {   int i;
        char cont[100];
     char capt[100];
      do{
          printf("**MENU**\n");
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Country to Capital\n");
        printf("4.Capital to Country\n");
        printf("5.Exit\n");
        printf("Enter a Choice:");
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
            for(i=0;i<3;i++)
            {
            if(strcmp(c[i].country,cont)==0)

        {
          printf("Capital of %s is %s\n",c[i].country, c[i].capt);
        } 
            }
          break;
          case 4:
          printf("Enter the Capital:");
          scanf("%s",&capt);
          for(i=0;i<3;i++)
          {
          if(strcmp(c[i].capt,capt)==0)  
        {
            printf("%s is Capital of %s\n",c[i].capt,c[i].country);
        }   
            }
            case 5:exit(0);
        
      }
    }
    while(a!=8);
    }