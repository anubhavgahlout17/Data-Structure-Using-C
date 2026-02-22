#include<stdio.h>

int main(){
 
    int arr[3][3] = {{0,5,3},{0,0,2},{7,2,2}};
    int zero = 0; 
    int non_zero = 0;
    int k = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                zero++;
            }
            else
            {
                non_zero++;
            }
        }
    }
    int sparse[3][non_zero];
   if (zero < non_zero)
   {
    printf("It is Not a Sparse Matrix");
    return 0;
   }
   else
   {
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] != 0)
            {
                sparse[0][k] = i;
                sparse[1][k] = j;
                sparse[2][k] = arr[i][j];
                k++;
                
            }
        }
    }    
   }
   for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < non_zero; j++)
    {
        printf("%d ",sparse[i][j]);
    }
    printf("\n");
   }
    return 0;
}