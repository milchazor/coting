#include <stdio.h>

int useless()
{
    int n[7] = {1,2,3,4,5,6,7};
    
    int fir = 0;
    int sec = 0 ;
    int x = sizeof(int)/sizeof(n);
    for(int i = 0; i < x;i++)
    {
        if(n[i] > fir) {fir = n[i];}
        else if(n[i]> sec && n[i] < fir) { sec = n[i];}
    }
    printf("%d\n", sec);
    return(sec);
}
void arrprint(int* arr,int len)
{
    printf("[");
    for(int x = 0; x < len-1; x++) 
    {
        printf("%d, ", arr[x]);
    }
    printf("%d]\n", arr[len-1]);
}
void arrswap(int* arr, int len, int el,int target)
{
    
    int temp = arr[target];
    for(int x = target; x < len; x++)
    {

    }
}
void main()
{
    int len = 10;
    int arr[len];
    for(int x = 0; x < len; x++) 
    {
        arr[x]=x+1;
    }

    int one = 5;
    int two = 6;
    int* kms = arr;
    printf("0x%p\n", kms);

    arrswap(arr, len, one, two);
    arrprint(arr,len);
}
