#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char A[] = "nitin";
    int i, j, count;
    for(i=0; i<6-1; i++){
        count = 1;
        if(A[i]!=-1){//Needed some help on this one, was previously looping this with '\0', and not -1.
            for(j = i+1; j<6; j++){
                if(A[i]==A[j]){
                    count++;
                    A[j]=-1;
                }
            }
            if(count>1){
                printf("%c repeats %d times.", A[i], count);
            }
        }
    }
    return 0;
}