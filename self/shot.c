#include<stdio.h>
void main() 
{
  int a,i,temp;
  printf("Enter the RANGE = ");
  scanf("%d", &a);
  int arr[a];
  for(int i = 0; i < a; i++)
  {
    printf("Enter the value of arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }
    printf("The values in the array are:\n");
    for(i = 0; i < a; i++)
      printf("%d ", arr[i]);
    int max = arr[0],min=arr[0],x=0;
    for(int k=0;k<=a/2;k++)
    {
    for(i = 0+x; i < a-x; i++)
    {
      if(arr[i] > max)
        max = arr[i];
      if(arr[i] < min)
        min = arr[i];
    }
    for(i = 0+x; i < a-x; i++)
    {
        temp = arr[0+x];
        arr[0+x]=max;
        arr[i]=temp;
        temp=arr[a-1-x];
        arr[a-1-x]=min;
        arr[i]=temp;
    }
    x++;
    }
    printf("sorted array is = \n");
    for(i = 0; i < a; i++)
      printf("%d\n", arr[i]);
}