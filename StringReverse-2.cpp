#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char A[] = "ABCDE";
    char temp;
    int i, j;
    for(j=0; A[j]!=0; j++){
        
    }
    j = j-1;
    for(i=0; i<j; i++){//Had to look up i<j, ashamed.
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    printf("Reversed String: %s", A);
    return 0;
}
//Without second array, have to assume length in both methods though, check lenghth assuming and further enhance.