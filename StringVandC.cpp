#include <stdio.h>
#include <stdlib.h>
int main()
{
    char A[] = "Hello World";
    int vcount=0;
    int ccount=0;
    int i;
    for(i=0; A[i]!='\0'; i++){
    if(A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U'){
        vcount++;    
    }
    else if((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122)){
        ccount++;
    }
}
    printf("Number of vowels and consonants in the sentences: %d and %d", vcount, ccount);
    return 0;
}