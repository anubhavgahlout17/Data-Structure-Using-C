#include<stdio.h>



void print(int a){
    if (a == 0)
    {
        return;
    }
    print(a-1);
    printf("%d ",a);

    
}


int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    print(a);
    return 0;
}