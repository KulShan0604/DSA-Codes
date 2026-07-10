#include <iostream>
#include <stdlib.h>
#include<stdio.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
void Append(struct Array *arr,int x)
 {
 if(arr->length<arr->size)
 arr->A[arr->length++]=x;
 }
 void Insert(struct Array *arr,int index,int x)
 {
 int i;

 if(index>=0 && index <=arr->length)
 {
 for(i=arr->length;i>index;i--)
 arr->A[i]=arr->A[i-1];
 arr->A[index]=x;
 arr->length++;
 }
 } 
void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
int Delete(struct Array *arr,int index)
{
 int x=0;
 int i;
 if(index>=0 && index<arr->length)
 {
 x=arr->A[index];
 for(i=index;i<arr->length-1;i++)
 arr->A[i]=arr->A[i+1];
 arr->length--;
 return x;
 }
 return 0;
}
void swap(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
int LinearSearch(struct Array *  arr, int key){
    int i;
    for(i=0;i<arr->length; i++){
        if(key == arr->A[i]){
            swap(&arr->A[i], &arr->A[i-1]);
            return i-1;
        }
    }
            return -1;
}
int main()
{
 struct Array arr={{2,3,4,5,6},10,5};
 Append(&arr,10);
 Insert(&arr,0,12);
 printf("%d", LinearSearch(&arr, 4));
 Display(arr);
 return 0;
}