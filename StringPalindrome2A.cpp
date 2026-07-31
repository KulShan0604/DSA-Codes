#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char A[] = "nitin";
    char B[6];
    int i, j;
    for(i=0; A[i]!='\0'; i++){
        
    }
    i = i-1;
    for(j=0; i>=0; i--, j++){
        B[j] = A[i];
    }
    B[j]='\0';
    for(i=0, j=0; A[i]!='\0', B[j]!='\0'; i++, j++){//Should use && in comparison.
        if(A[i]!=B[j]){
            break;
        }
    }
    if(A[i]==B[j]){
        printf("String is a palindrome.");
    }
    return 0;
}