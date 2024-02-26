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
void arrswap(int* arr, int len, int BIG,int SMOL)
{
    int copy[len];
    for(int x = 0; x < len; x++)
    {
        copy[x] = arr[x];
    }
    for(int x = SMOL; x < len; x++)
    {   
        arr[x] = copy[x-1];
    }
    arr[SMOL] = copy[BIG];
}
void insort(int*arr, int len)
{
    int max = -1;
    int pos = -1;
    for(int x = len; x > len; x--)
    {

        for(int y = 0; y < x; y++)
        {

        }
    }
}
void main()
{
    int arr[10] = {0,5,3,8,1};
    int len = 10;
    insort(arr,len);
    arrprint(arr,len);
}
