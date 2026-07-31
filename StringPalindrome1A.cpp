#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char A[] = "nitin";
    int i, j;
    for(j=0; A[j]!='\0'; j++){
        
    }
    j = j-1;
    for(i=0; i<j; i++, j--){
        if(A[i]!=A[j]){
            break;
        }
    }
    if(A[i] == A[j]){
        printf("String is a palindrome.");
    }
    else{
        printf("Not a palindrome.");
    }
    return 0;
}