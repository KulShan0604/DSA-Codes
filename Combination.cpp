#include <stdio.h>
#include <iostream>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int nCr(int n, int r){
    if(n == r || r == 0){
        return 1;
    }
    else
     return nCr(n-1, r-1) + nCr(n-1, r);
}

int C(int n, int r){
    int t1, t2;
    t1 = fact(n);
    t2 = fact(r) * fact(n-r);
    return t1/t2;
}

int main(){
int a, b;
a = nCr(5,2);
b = C(5,2);
printf("%d\n", a);
printf("%d", b);
return 0;
}
//revised the assignment bug error in line 4, changed the assignment operator to equality check and the code worked fine.