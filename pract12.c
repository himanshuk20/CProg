#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
}; 
struct student s[2];
int main()
{
    int i;

    printf("Enter information of students:\n");

    // storing information
    for(i=0; i<2; ++i)
    {
        

        printf("Enter the roll no: ");
        scanf("%d",&s[i].roll);
        
        printf("Enter name: ");
        scanf("%s",s[i].name);
        
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);

        printf("\n");
    }

    printf("Displaying Information:\n\n");
    // displaying information
    for(i=0; i<2; ++i)
    {
        printf("\nRoll number: %d\n",s[i].roll);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
        printf("\n");
    }
    return 0;
}
