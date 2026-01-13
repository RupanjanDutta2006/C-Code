#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int roll,marks;
};
void main()
{
    int i,j;
    printf("Enter the Range of the Student = ");
    scanf("%d",&j);
    struct student s[j];
    struct student *ptr=s;
    for(i=0;i<j;i++)
    {
        printf("Name = ");
        getchar();
        fgets((ptr+i)->name,sizeof(s[j].name),stdin);
        printf("Roll No. = ");
        scanf("%d",&(ptr+i)->roll);
        printf("Marks = ");
        scanf("%d",&(ptr+i)->marks);
    }
    printf("------------------------------------\n");
    printf("Name\tRoll\tMarks\n");
    printf("------------------------------------\n");
    for(i=0;i<3;i++)
    {
        printf("%s\t",(ptr+i)->name);
        printf("%d\t",(ptr+i)->roll);
        printf("%d\n",(ptr+i)->marks);
    }
}
//for(j=0;nm[j]!='\0';j++)
          //  scanf("%c",&(ptr+i)->name[j]);
        //
       // fgets((ptr+i)->name);
