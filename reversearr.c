#include <stdio.h>
int main (void){
 
    int ar[5]={1,2,3,4,5},rar[5];

    for (int i=0;i<5;i++ ){

        rar[i]=ar[4-i];
      
    }
    for (int i=0;i<5;i++ ){

        printf("%d ",rar[i]);
      
    }

}