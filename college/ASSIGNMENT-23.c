#include<stdio.h>
struct student
{
    char name[20];
    int roll_no,marks;
}s[5];
void main()
{
    int i,max,l;
    for(i=0;i<5;i++)
    {
        printf("Enter the Roll no = ");
        scanf("%d",&s[i].roll_no);
        printf("Enter the Name = ");
        scanf("%s",s[i].name);
        printf("Enter the marks = ");
        scanf("%d",&s[i].marks);
    }
    printf("\n----------------------------------------------------------\n");
    printf("Roll\tName\tMarks");
    printf("\n----------------------------------------------------------\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t%s\t%d\n",s[i].roll_no,s[i].name,s[i].marks);
    }
    max=s[0].marks;
    for(i=0;i<5;i++)
        if(max<s[i].marks)
        {
            l=i;
            max=s[i].marks;
        }
    printf("Highest Marks = \n");
    printf("Roll\tName\tMarks\n");
    printf("%d\t%s\t%d\n",s[l].roll_no,s[l].name,s[l].marks);
}