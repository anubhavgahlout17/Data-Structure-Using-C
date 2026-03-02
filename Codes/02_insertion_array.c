#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
       printf("%d ",arr[i]);
  }
  printf("\n");
}

int insertion(int arr[],int size,int element,int index,int capacity){
         if (size >= capacity)  
         {
          return -1;
         }
         for (int i = size-1; i >= index; i--)
         {
             arr[i+1] = arr[i];
             
         }
         arr[index] = element;
         return 1;
}



int main(){
    int arr[100] = {45,47,96,54};
    int size = 4;
    int capacity = 100;
    int element = 50;
    int index = 2;
    display(arr,size);
    insertion(arr,size,element,index,capacity);
    size++;
    display(arr,size);
    
    return 0;
}