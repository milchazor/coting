#include <stdio.h>
//assisting bs
void arrprint(int* arr,int len)
{
    printf("[");
    for(int x = 0; x < len-1; x++) 
    {
        printf("%d, ", arr[x]);
    }
    printf("%d]\n", arr[len-1]);
}

void arrcomp(int* arr1, int* arr2,int len)
{
    int err[len];
    int test = 0;
    for(int x = 0; x < len; x++)
    {
        if(arr1[x] == arr2[x]){err[x] = 0;}
        else 
        {
            err[x]=-1;
            test = -1;
        }
    }
    if(test == -1)
    {
        printf("failed\n");
        arrprint(arr1,len);
        arrprint(arr2,len);
    } else {
        printf("success\n");
    }
}

int arrshift(int* arr, int len, int BIG,int SMOL)
{
    if( BIG < SMOL)
    {
        printf("sizefail\n");
        return(-1);
    }
    
    int copy[len];
    for(int x = 0; x < len; x++)
    {
        copy[x] = arr[x];
    }
    for(int x = SMOL; x < BIG+1; x++)
    {   
        arr[x] = copy[x-1];
    }
    arr[SMOL] = copy[BIG];
    return(0);
}

void arrswap(int* arr,int el1, int el2)
{
    int temp = arr[el1];
    arr[el1] = arr[el2];
    arr[el2] = temp;
}
//ex 1
int linsearch(int* arr, int len, int tar) 
{
    for(int x = 0; x < len; x++)
    {
        if (arr[x] == tar) {return 1;}
    }
    return 0;
}

int binsearch (int* arr, int len, int tar)
{
    int l = 0;
    int r = len-1;
    int m = (l + r) / 2;

    while(m != tar && l >= r)
    {
        if(arr[m] < tar)
        {
            r = m;
            m = (l + r) / 2;;
        } else if(arr[m] > tar) 
        {
            r = l;
            m = (l + r) / 2;
        } else if(arr[m] == tar)
        {
            return 1;
        }
        return 0;
    }
}
//ex 2: n^2 / 2k
// pseudocode searches the highest sum, from all conintuos subarrays of A

// ex 3
/* a) 8<3<7<6<4<1<2<5
   b) false, n^2 */