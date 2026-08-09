#include <stdio.h>
#include <stdlib.h>
struct Matrix {
    int *A;//Dynamic here, cause we don't know the size of the incoming array.
    int n;//size
};
void set(struct Matrix *m, int i, int j, int x){
    if(i>=j){
        m->A[i * (i-1)/2 + j-1] = x;//Given is Row Major, For Col Major:- m->n*(j-1) - (j-2)*(j-1)/2 + (i-j)
    }
}
int get(struct Matrix m, int i, int j){
    if(i>=j){
        return m.A[i * (i-1)/2 + j-1];//Given is Row Major, For Col Major:- m.n*(j-1) - (j-2)*(j-1)/2 + (i-j)
    }
    else return 0;
}
void Display(struct Matrix m){
    int i, j;
    for(i=1; i<=m.n; i++){
        for(j=1; j<=m.n;j++){
            if(i>=j){
                printf("%d ", m.A[i * (i-1)/2 + j-1]);//Given is Row Major, For Col Major:- m.n*(j-1) - (j-2)*(j-1)/2 + (i-j)
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int main(){
    struct Matrix m;
    int i, j, x;
    printf("Provide the dimensions for an array: ");
    scanf("%d", &m.n);
    m.A=(int *)malloc(m.n*(m.n+1)/2 * sizeof(int));//Took matrix at first pass, needs size of non zero elt, else what's the point.
    printf("Enter all the elements of the matrix: ");
    for(i=1; i<=m.n; i++){
        for(j=1; j<=m.n; j++){
            scanf("%d", &x);
            set(&m, i, j, x);
        }
    }
    printf("\n\n");
    Display(m);
}