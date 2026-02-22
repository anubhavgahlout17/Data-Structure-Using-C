#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}

int insertion(int arr[],int index,int element,int size){
    for (int i = size-1; i >= index ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 0;

}

int main(){
    int arr[100] = {25,45,85,96};
    int size = 4;
    int element = 50;
    insertion(arr,2,element,size);
    size++;
    display(arr,size);

    return 0;
}