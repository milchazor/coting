#include <stdio.h>
#include <assert.h>
#include <math.h>
/*
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

int isSafe(int board[], int x, int y, int n)
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
*/

int in(char test, char tested[], int len)
{
    for(int x = 0; x < len; x++)
    {
        if(tested[x] == test) {return 1;}
    }
    return 0;
}

int num(char input[], int ind, int len)
{
    int res = (int)input[ind] - (int)'0';
    int x = 1;
    char num[10] = "0123456789";
    while(in(input[ind+x],num,10) && ind + x < len)
    {
        res = res*10+((int)input[ind+x] - (int)'0');
        x++;
    }
    x = 1;
    while(in(input[ind-x],num,10) && ind - x > -1)
    {
        res = res + ((int)input[ind-x] - (int)'0') * pow(10,x);
        x++;
    }
    return res;
}

int calculator(char input[])
{
    int len = 0;
    while(input[len] != "\0")
    {
        len++;
    }
    calc(input,0,len-1);
}

int calc(char input[],int start, int end)
{   
    int counter = 0;
  
    for(int x = 0; x < end+1; x++)
    {
        int skipper = 0;
        int temp = 1;
        int run = x;
        if(input[x] == "(")
        {
            while (input[run] != ")" || skipper > 0)
            {
                if(input[run] == ")"){skipper--;}
                if(input[run] == "("){skipper++;}
                run++;
            }
            calc(input,x,run);
        }
        if(input[x] == "*")
        {

        }
    }



}

void main()
{

 char ex[10] = "abc123+246";
 int len = 10;
 printf("test1 = %d\n", num(ex,5,len));
 printf("test2 = %d\n", num(ex,9,len));
} 