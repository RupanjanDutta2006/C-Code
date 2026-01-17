#include<stdio.h>    
#include<stdlib.h>
void main()
{
    int n,i,b,max=0;
    printf("Enter the Range of the column of barrier = ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the height of each barrier:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int first=0, last=n-1;
    while(first<last)
    {
        int h=(arr[first]<arr[last])?arr[first]:arr[last];
        int area=abs(last-first)*h;
        if(area>max)
            max=area;
        if(arr[first]<arr[last])
            first++;
        else
            last--;
    }
    b = (arr[first]>=arr[last])?arr[last]:arr[first];
    printf("MAximum Water is = %d",max);
}
