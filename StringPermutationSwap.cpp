#include <stdio.h>
#include <stdlib.h>
void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
void permutation(char *s, int l, int h){
    int i;
    if(l==h){//Need to study pointer and recursion deeply.
        printf("%s", s);
    }
    else{
        for(i=l; i<=h; i++){
            swap(&s[l], &s[i]);
            permutation(s, l+1, h);
            swap(&s[l], &s[i]);
        }
    }
}
int main(){
    char s[] = "ABC";
    permutation(s, 0, 2);
    return 0;
}