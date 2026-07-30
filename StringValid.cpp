#include <stdio.h>
#include <stdlib.h>
int validate(char *A){
    int i;
    for(i=0; A[i]!='\0'; i++){
        if(!(A[i]>=65 && A[i]<=90) && !(A[i]>=97 && A[i]<=122) && !(A[i]>=48 && A[i]<=57)){
            return 0;
        }
    }
    return 1;
}
//Bugs:- Invalid number range: 48 to 57 for 0 to 9, Returned 1 in an else loop should be done after whole of the string is checked for whether validated or not

int main()
{
    char *name = "ABCD1234";
    if(validate(name)){
        printf("Valid String");
    }
    else{
        printf("Invalid String");
    }
        
    return 0;
}