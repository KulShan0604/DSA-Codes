#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char A[] = "abcdg";
    char B[] = "abcdf";
    int i, j;
    for(i=0, j=0; A[i]!='\0', B[j]!='\0'; i++, j++){
        if(A[i]!=B[j]){
            break;
        }
    }
    if(A[i]==B[j]){
        printf("Strings Equal.");
    }
    else if(A[i]>B[j]){
        printf("String A larger than B.");
    }
    else{
        printf("String A smaller than B.");
    }
    return 0;
}