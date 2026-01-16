//Container With Most Water
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    //find max
    int max=arr[0];
    int j=0;
    for(int i=1;i<n;i++)
        if(arr[i]>max){
            max=arr[i];
            j=i;
        }
    //find 2nd max
    int secmax;
    if(arr[0]==max)
        secmax=arr[1];
    else
        secmax=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>secmax && arr[i]<max)
            secmax=arr[i];
    //find difference row of max and secmax
    int area=(secmax)*(abs(j-i));
    printf("The maximum area is: %d\n", area);
}