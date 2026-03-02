#include<stdio.h>
#include<stdlib.h>

struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

void traversal(struct myarray *a){
    printf("Result: ");
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d ",(a->ptr)[i]);
    }

}

void createArray(struct myarray *a,int tsize,int usize){
    (*a).total_size = tsize;
    (*a).used_size = usize;
    (*a).ptr = (int *)malloc(tsize*sizeof(int));
}

void SetValue(struct myarray *a){
    printf("Enter 5 value: ");
    for (int i = 0; i < a->used_size; i++)
    {
        scanf("%d",&(a->ptr)[i]);
    }
    
}


int main(){
 struct myarray marks;
createArray(&marks,10,5);
SetValue(&marks);
traversal(&marks);
return 0;
}
