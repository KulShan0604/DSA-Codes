#include <iostream>
#include <stdlib.h>
#include<stdio.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
struct Array *merge(struct Array *arr1, struct Array *arr2){
    int i=0;
    int k=0;
    int j=0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else
        arr3->A[k++]=arr2->A[j++];
    }
    for(; i<arr1->length; i++){
        arr3->A[k++]=arr1->A[i];
    }
    for(; j<arr2->length; j++){
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size=10;
    return arr3;
}
struct Array *Union(struct Array *arr1, struct Array *arr2){
    int i=0;
    int k=0;
    int j=0;
    struct Array* arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else if(arr2->A[j]<arr1->A[i]){
            arr3->A[k++]=arr2->A[j++];
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(; i<arr1->length; i++){
        arr3->A[k++]=arr1->A[i];
    }
    for(; j<arr2->length; j++){
        arr3->A[k++]=arr2->A[j];
    } 
    arr3->length = k;
    arr3->size=10;
    return arr3;
}
struct Array *Intersection(struct Array *arr1, struct Array *arr2){
    int i=0;
    int k=0;
    int j=0;
    struct Array* arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            i++;
        }
        else if(arr2->A[j]<arr1->A[i]){
            j++;
        }
        else{//if(arr1->A[i]==arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    arr3->length = k;
    arr3->size=10;
    return arr3;
}
struct Array *Difference(struct Array *arr1, struct Array *arr2){
    int i=0;
    int k=0;
    int j=0;
    struct Array* arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else if(arr2->A[j]<arr1->A[i]){
            j++;
        }
        else{
            i++;j++;
        }
    }
    for(; i<arr1->length; i++){
        arr3->A[k++]=arr1->A[i];
    }
    arr3->length = k;
    arr3->size=10;
    return arr3;
}
int main()
{
 struct Array arr1={{2, 4, 6 , 8, 10}, 10, 5};
 struct Array arr2={{1, 3, 5, 7, 9}, 10, 5};
 struct Array *arr3;//We create this array as a pointer due to the fact that we need to create this array, the merged one in heap, because otherwise, in the stack, this array gets destroyed as soon as merge ends, and then main will not be able to access it.
 arr3 = merge(&arr1, &arr2);
 Display(*arr3);//Since the struct function returns address of array three in heap, we always need to use star pointer to access it otherwise, we may not be able to do the same.
 return 0;
}