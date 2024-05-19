#include<stdio.h>
void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int partiton(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for(int j = low; j <=high; j++)
    {
        if(arr[j])
    }
}
int main()
{
    int n; scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    return 0;
}