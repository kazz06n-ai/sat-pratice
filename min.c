#include <stdio.h>

int main (void){
    int n=0,rem=0,i=0;
    int ar[9]={500,200,100,50,20,10,5,2,1};
    scanf("%d",&n);
    while (n>0)
    {
        rem=n/ar[i];
        if(rem>0){
            printf("%d: %d\n",ar[i],rem);
        }
        n=n%ar[i];
        i++;
    }
}