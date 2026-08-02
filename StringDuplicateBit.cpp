#include <stdio.h>
#include <stdlib.h>
int main(){ 
    char A[] = "nitin";
    int i;
    long int H=0;
    long int x=0;
    for(i=0; A[i]!='\0'; i++){
        x=1;
        x = x<<(A[i]-97);//Some problem with logic, will resolve.
        if((x&H)>0){
            printf("Duplicate Element Found %c \n", A[i]);
        }
        else
        H = x | H;
    }
    return 0;
}