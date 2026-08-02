#include <stdio.h>
#include <stdlib.h>//Tried using tolower, only to find it works in C only for a single character and not a loop.
int main(){ //Need to use functions if the need for the same arises, or can use the methods learnt
    char A[] = "nitin";
    char B[] = "tinin";
    int i;
    int H[26] = {26};
    for(i=0; A[i]!='\0'; i++){
        H[A[i]-97]++;
    }
    for(i=0; B[i]!='\0'; i++){
        H[B[i]-97]--;
        if(H[B[i]-97]<0){//Was a bit confused for this loop..
            printf("Not an Anagram.");
            break;
        }
    }
    if(B[i]=='\0'){
        printf("Given strings are anagrams.");
    }
    return 0;
}