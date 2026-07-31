#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char A[] = "nitin";
    int H[26]={0};//To initialise all with 0 use this technique..
    int i;
    for(i=0; A[i]!='\0'; i++){
        H[A[i]-97] += 1;
    }
    for(i=0; i<26; i++){
        if(H[i]>1){
            printf("%c repeats ", (i+97));
            printf("%d times. ", H[i]);
        }
    }
    return 0;
}