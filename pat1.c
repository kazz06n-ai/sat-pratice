#include <stdio.h>

int main (void){

    int ar[5]={10,3,6,9,7},par[5]={3,24,4,3,18},far[5];
    
    for (int i=0;i<5;i++ ){

        if (ar[i]>par[i]){

            if (ar[i]%par[i]==0){

                far[i]=ar[i];
                continue;

            }
            else{

                int s=0;
                s=par[i]-(ar[i]%par[i]);
                far[i]=ar[i]+s;
                continue;
            
            }
        }
        else{

            if (par[i]%ar[i]==0){

                far[i]=par[i];
                continue;

            }
            else{

                int s=0;
                s=(par[i]%ar[i]);
                far[i]=par[i]-s;
                continue;
            
            }
        }
    }
    for (int i=0;i<5;i++ ){

        printf("%d ",far[i]);
    
    }
}