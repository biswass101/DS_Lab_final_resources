#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    int arr[n]; for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n - 1; i++)
    {
        int max_idx = i;
        //getting max-->
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[max_idx]) max_idx = j;
        }
        int temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}