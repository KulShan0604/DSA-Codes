#include <stdio.h>
#include <stdlib.h>
int main()
{
    char A[] = "Hello World";
    int count = 0;
    int i;
    for(i=0; A[i]!='\0'; i++){
        if(A[i] == ' ' && A[i-1] != ' '){
            count++;
        }
    }
    printf("The total word count is: %d", count+1);
    //Adding one is necessary since we are counting spaces not words exactly, so either start variable from 1 or add 1 at the end.
    return 0;
}