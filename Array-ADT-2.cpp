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
int BinSearch(struct Array arr, int key){
    int l, mid, h;
    l=0, h=arr.length-1;
    while(l<=h){
        mid = (l+h)/2;
        if(key == arr.A[mid]){
            return mid;
        }
        else if(key < arr.A[mid]){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}
int RecBinSearch(struct Array *arr, int l, int h, int key){
    static int mid;
    if(l<=h){
        mid = (l+h)/2;
        if(key == arr->A[mid]){
            return mid;
        }
        else if(key < arr->A[mid]){
            return RecBinSearch(arr, l, mid-1, key);
        }
        else{
            return RecBinSearch(arr, mid+1, h, key);
        }
    }
    return -1;
}
int get(struct Array arr, int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    return -1;
}
void set(struct Array *arr, int index, int x){
    if(index>=0 && index<arr->length){
        arr->A[index] = x;
    }
}
int max(struct Array arr){
    int max = arr.A[0];
    int i;
    for(i=1; i<arr.length; i++){
        if(arr.A[i]>max){
            max = arr.A[i];
        }
    }
    return max;
}
int min(struct Array arr){
     int min = arr.A[0];
    int i;
    for(i=1; i<arr.length; i++){
        if(arr.A[i]<min){
            min = arr.A[i];
        }
    }
    return min;
}
int sum(struct Array arr){
    int s=0;
    for(int i=0; i<arr.length; i++){
        s = s + arr.A[i];
    }
    return s;
}
float avg(struct Array arr){
    return (float)sum(arr) / arr.length;
}
void reverse(struct Array *arr){
    int *B;
    int i, j;
    B = new int[arr->length]; 
    for(i=arr->length-1, j=0; i>=0; i--, j++){
        B[j]=arr->A[i];
    }
    for(i=0; i<arr->length; i++){
        arr->A[i]=B[i];
    }
}
void reverse2(struct Array *arr){
    int i, j;
    for(i=0, j=arr->length-1; i<j; i++, j--){
        swap(&arr->A[i], &arr->A[j]);
    }
}
void InsertSort(struct Array *arr, int x){
    if(arr->length==arr->size){
        return;
    }
    int i = arr->length-1;
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++; 
}
int isSorted(struct Array arr){
    int i;
    for(i=0; i<arr.length-1; i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}
void rearrange(struct Array *arr){
    int i, j;
    i = 0;
    j = arr->length-1;
    while(i<j){
        while(arr->A[i]<0){
            i++;
        }
        while(arr->A[j]>=0){
            j--;
        }
        if(i<j){
            swap(&arr->A[i], &arr->A[j]);
        }
        
    }
}
int main()
{
 struct Array arr={{2,3,4,5,6},10,5};
 Append(&arr,10);
 Insert(&arr,0,12);
 printf("%d\n", get(arr, 3));
 printf("%d\n", max(arr));
 printf("%d\n", min(arr));
 printf("%f\n", avg(arr));
 printf("%d", LinearSearch(&arr, 4));
 printf("%d\n", BinSearch(arr, 69));
 printf("%d", RecBinSearch(&arr, 0, arr.length-1, 4));
 reverse(&arr);
 reverse2(&arr);
 InsertSort(&arr, 3.5);
 rearrange(&arr);
 printf("%d\n", isSorted(arr));
 Display(arr);
 return 0;
}