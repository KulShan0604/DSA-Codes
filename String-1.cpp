#include <stdio.h>
int main()
{
    char a[] = "Hello";
    for(int i=0; a[i]!=0; i++){
        if(a[i]>=65 && a[i]<=95){
            a[i]+=32;
        }
        else if(a[i]>=97 && a[i]<='z'){
            a[i]-=32;
        }
    }
    printf("%s", a);
    return 0;
}