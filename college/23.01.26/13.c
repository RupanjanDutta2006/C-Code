#include <stdio.h>
struct student
{
    int roll_no, c, ph, mt, dr, t, avg;
    char nm[20], grd;
};
void main()
{
    int i, n, max = -1, smax = -1, maxi = -1;
    printf("Enter the No of Student = ");
    scanf("%d", &n);
    struct student s[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the Roll no for %d no Student = ", i + 1);
        scanf("%d", &s[i].roll_no);
        printf("Enter the NAME for %d no Student = ", i + 1);
        scanf("%s", s[i].nm);
        printf("Enter the C no for %d no Student = ", i + 1);
        scanf("%d", &s[i].c);
        printf("Enter the Physics no for %d no Student = ", i + 1);
        scanf("%d", &s[i].ph);
        printf("Enter the Math no for %d no Student = ", i + 1);
        scanf("%d", &s[i].mt);
        printf("Enter the Engineering Drawing no for %d no Student = ", i + 1);
        scanf("%d", &s[i].dr);
        s[i].t = s[i].c + s[i].ph + s[i].mt + s[i].dr;
        s[i].avg = s[i].t / 4;
        if (s[i].avg <= 40)
            s[i].grd = 'D';
        else if (s[i].avg <= 60)
            s[i].grd = 'C';
        else if (s[i].avg <= 80)
            s[i].grd = 'B';
        else if (s[i].avg <= 90)
            s[i].grd = 'A';
        else
            s[i].grd = 'O';
    }
    printf("--------------------------------------------------------------------------------\n");
    printf("Roll\tName\tC\tPhysics\tMath\tDrawing\tTotal\tAvg\tGrade\n");
    printf("--------------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%c\n", s[i].roll_no, s[i].nm, s[i].c, s[i].ph, s[i].mt, s[i].dr, s[i].t, s[i].avg, s[i].grd);
    for (i = 0; i < n; i++)
    {
        if (s[i].t > max)
        {
            max = s[i].t;
            maxi = i;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (s[i].t < max && s[i].t > smax)
            smax = s[i].t;
    }
    printf("\nStudents with 2nd highest marks:\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("Roll\tName\tC\tPhysics\tMath\tDrawing\tTotal\tAvg\tGrade\n");
    printf("--------------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        if (s[i].t == smax)
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%c\n", s[i].roll_no, s[i].nm, s[i].c, s[i].ph, s[i].mt, s[i].dr, s[i].t, s[i].avg, s[i].grd);
    }
}
