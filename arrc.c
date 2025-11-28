#include <stdio.h>
int main (void){

    int ar[5]={7,9,6,2,3},car[5];
    int s=0;

    for (int i=0;i<5;i++ ){

        car[i]=s+ar[i];
        s=car[i];
    
    }
    for (int i=0;i<5;i++ ){

        printf("%d ",car[i]);
    
    }

}
