#include <stdio.h>
int main() {
    int a,min,sum=0,i=0;
    printf("enter a no");
    scanf("%d",&a);
    min=a;
    sum=a;
    for(i=0;i<4;i++){
        printf("enter a no");
        scanf("%d",&a);
        if(a<min){
            min=a;
        }
        sum=sum+a;

    }
    sum=sum-min;
    printf("sum=%d",sum);
    return 0;

}