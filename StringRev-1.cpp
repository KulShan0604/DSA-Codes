#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char A[] = "ABCDE";
    char B[5];
    int i, j;
    char temp;//took this as an integer variable.
    for(i=0; A[i]!='\0'; i++){
        
    }
    i = i-1;//forgot this, had to look in notes, important as last char it checks and lands on is /0, so have to bring i one down.
    for(j=0; j<5; i--, j++){
        B[j] = A[i];//was swapping and mixing the two techniques.
    }
    B[j] = '\0';//added this later.
    printf("Reversed String: %s", B);
    return 0;
}