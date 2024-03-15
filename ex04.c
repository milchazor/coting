#include <stdio.h>

int binsearch (const int* arr, int len, int tar, int start, int end)
{
    int mid = (start + end) /2;
    if(arr[mid] == tar) return mid;
    if(arr[mid] > tar)
    {
        return binsearch(arr,len,tar,start,mid);
    }
    if (arr[mid] < tar)
    {
        return binsearch(arr,len,tar,mid,end);
    }
}
void main()
{
    int test1[10] = {0,1,2,3,4,5,6,7,8,9};
    int len1 = 10;
    for(int x = 0; x < len1; x++){
        printf("ind =  %d\n", binsearch(test1,len1,x, 0, len1-1));
    }
}