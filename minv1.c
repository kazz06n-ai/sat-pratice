#include <stdio.h>
int main(void){
    int n=2763,rem=0;
    int ar[9]={0,0,0,0,0,0,0,0,0},rs[9]={500,200,100,50,20,10,5,2,1};
    if (n>500){
        rem=n/500;
        n=n-500*rem;
        ar[0]=rem;
    
    }
    if (n>200){
        rem=0;
        rem=n/200;
        n=n-200*rem;
        ar[1]=rem;
    
    }
    if (n>100){
        rem=0;
        rem=n/100;
        n=n-100*rem;
        ar[2]=rem;
    
    }
    if (n>50){
        rem=0;
        rem=n/50;
        n=n-50*rem;
        ar[3]=rem;
    
    }
    if (n>20){
        rem=0;
        rem=n/20;
        n=n-20*rem;
        ar[4]=rem;
    
    }
    if (n>10){
        rem=0;
        rem=n/10;
        n=n-10*rem;
        ar[5]=rem;
    
    }
    if (n>5){
        rem=0;
        rem=n/5;
        n=n-5*rem;
        ar[6]=rem;
    
    }
    if (n>2){
        rem=0;
        rem=n/2;
        n=n-2*rem;
        ar[7]=rem;
    
    }
    if (n>1){
        rem=0;
        rem=n/1;
        n=n-1*rem;
        ar[8]=rem;
    
    }
    for (int i=0;i<9;i++ ){
        printf("%d: %d ",rs[i],ar[i]);
    
    }


}