#include<stdio.h>
#include<string.h>

struct Student
{
    int roll, marks;
    char name[20];
} arr[20];

void main()
{
    int n, i, max, smax, k = 0, x = 0;

    printf("Enter the Range = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter the Roll no = ");
        scanf("%d", &arr[i].roll);
        printf("Enter the Name = ");
        scanf("%s", arr[i].name);
        printf("Enter the Marks = ");
        scanf("%d", &arr[i].marks);
    }

    printf("------------------------------------------------------------------------\n");
    printf("Roll\tName\tMarks\n");
    printf("------------------------------------------------------------------------\n");
    for(i = 0; i < n; i++)
        printf("%d\t%s\t%d\n", arr[i].roll, arr[i].name, arr[i].marks);

    max = arr[0].marks;
    for(i = 1; i < n; i++)
    {
        if(arr[i].marks > max)
        {
            max = arr[i].marks;
            k = i;
        }
    }

    smax = -1;
    for(i = 0; i < n; i++)
    {
        if(i != k && arr[i].marks > smax)
        {
            smax = arr[i].marks;
            x = i;
        }
    }

    printf("2nd max = %d Roll, %s Name, %d marks", arr[x].roll, arr[x].name, arr[x].marks);
}
