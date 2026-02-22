#include<stdio.h>

void  towerofHanoi(int n,char sourse, char helper, char destination){
    if (n == 1)
    {
        printf("Move disc 1 from %c to %c",sourse,destination);
        return;
    }
}
int main(){
  
    int n = 3;
    towerofHanoi(n,'A','B','C');
    
    return 0;
}