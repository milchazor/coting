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

void ins(int* arr, int len)
{
    printf("unfinished");
    if((len+1)%2 == 1) 
    {
        int dad = (len+1)/2;
    } else {
        int dad = len/2;
    }
}

void heapsort(int* arr, int len)
{
    printf("unfinished");
}
void insort(int*arr, int len)
{
    int count = 0;
    for(int x = 1; x < len; x++)
    {
        int pos = x; 

        for(int y = 0; y < x+1; y++)
        {   
            if(arr[y] > arr[x])
            {
                pos = y;
                break;
            }
            count++;
        } 
        //arrprint(arr,len);
        //printf("%d-->%d", x ,pos);
        arrshift(arr, len, x, pos);
        
    }
    printf("%d\n");
}

void main()
{
    int ex1[5] = {5,4,3,2,1};
    int res1[5] = {1,2,3,4,5};
    int len1 = 5;
    insort(ex1,len1);
    arrcomp(ex1,res1,len1);

    int ex2[7] = {0,1,3,2,4,5,6};
    int res2[7] = {0,1,2,3,4,5,6};
    int len2 = 7;
    insort(ex2,len2);
    arrcomp(ex2,res2,len2);
    
    int ex3[6] = {6,1,2,3,4,5};
    int res3[6] = {1,2,3,4,5,6};
    int len3 = 6;
    insort(ex3,len3);
    arrcomp(ex3,res3,len3);

    int ex4[] = {0, 1, 3, 4, 2, 8, 9, 5, 6, 7};
    int res4[] = {0,1,2,3,4,5,6,7,8,9};
    insort(ex4,10);
    arrcomp(ex4,res4,10);


}
