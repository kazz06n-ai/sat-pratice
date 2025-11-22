#include <stdio.h>
int monkey(int h){
    int att,t,n,r;
    att=h/3;
    att--;
    t=att*2;
    n=h-(att*3);
    r=n*(60/5);
    if (r==60){
        t++;
        r=0;
    }
    printf(" min = %d sec=%d\n",t,r);
}
int main(){
    int h;
    printf("Enter height of the tree in meters: ");
    scanf("%d",&h);
    monkey(h);
    return 0;
}