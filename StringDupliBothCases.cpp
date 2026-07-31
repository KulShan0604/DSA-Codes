#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char A[] = "nitin";
    int upper[26]={0};
    int lower[26]={0};
    int i;
    for(i=0; A[i]!='\0'; i++){
        if(A[i]>=97 && A[i]<=122){
            lower[A[i] - 97]++;
        }
        else if(A[i]>=65 && A[i]<=90){
            upper[A[i] - 65]++;
        }
    }//Could also be done by converting uppercase to lowercase.
    for(i=0; i<26; i++){
        if(upper[i]>1){
            printf("%c repeats ", (i+65));
            printf("%d times. ", upper[i]);
        }
        else if(lower[i]>1){
            printf("%c repeats ", (i+97));
            printf("%d times. ", lower[i]);
        }
    }
    return 0;
}