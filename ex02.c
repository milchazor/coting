#include <stdio.h>

int isPalindrome(char X[],int i, int j)
{
    if(i==j)
    {
        return 1;
    }
    if(j < i)
    {
        return 1;
    }
    if(X[i]==X[j])
    {
        return(isPalindrome(X,i+1,j-1));
    } else {
        return 0;
    }
}
void clean(int* board[],int n)
{
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < n; y++)
        {
            board[x][y] = 0;
        }
    }
}

int isSafe(int board[][], int x, int y, int n)
{

}

void solveQueen(int board[][], int n, int* res)
{
    for(int x  = 0; x < n; x++)
    {
        for(int y = 0; y < n; y++)
        {
            if(isSafe(board, x, y, n))
            {
                //int newboard[][] = board;
                //newboard[x][y] = 1;
                
            }
        }
    }
    for(int x  = 0; x < n; x++)
    {
        for(int y = 0; y < n; y++)
       {
            //if(board[x][y] == 1) {res++;}
        }
    }
} 

void main()
{
    //char test[] = "abcdefg";
    //printf("%d \n", sizeof(test)/sizeof(test[0])); 
    //printf("%d", isPalindrome(test, 0, sizeof(test)/sizeof(test[0])-2));
} 