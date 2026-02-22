#include<stdio.h>
#include<stdlib.h>
struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};
void create_array(struct myarray *a,int tsize,int usize){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize*sizeof(int));
}

void setvalue(struct myarray *a){
    printf("Enter %d element: ",a->used_size);
    for (int i = 0; i < a->used_size; i++)
    {
         scanf("%d",&a->ptr[i]);
    }
    
   
}

void display(struct myarray *a){
printf("Result: ");
for (int i = 0; i < a->used_size; i++)
{
        printf("%d ",a->ptr[i]);
}
printf("\n");
}


int main(){
    struct myarray marks;
    create_array(&marks,10,5);
    setvalue(&marks);
    display(&marks);
    free(marks.ptr);
return 0;
}