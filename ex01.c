#include <stdio.h>

int main () 
{
    char myString[] = "hello";
    int stringSize = sizeof(myString) / sizeof(myString[0]);
    printf("%d, ", stringSize);
    for (int i = 0; i < stringSize; i++) 
    {
        printf("%c", myString[i]);
    }

}