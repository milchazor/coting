#include <stdio.h>
int bruteforce(int* arr,int  len)
{
    for(int x = 0; x < len; x++)
    {   
        int temp[len];
        for(int c = 0; c < len; c++) {temp[c] = 0;}
        for( int y = x; y < len; y++)
        {
            for(int z = y; z < len; z++)
            {
                temp[z] = temp[z]+arr[z];
            }
        }
        for(int b = x; b < len; b++)
        {
            if(temp[b] == 0){return 1;}
        }
    }
    return 0;
}

int main () 
{
    int arr[] = {1,1,2,3,4,6,7,8,-1,10};
    int len = 10;
    printf("%d\n", bruteforce(arr,len));
}