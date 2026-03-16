#include<stdio.h>
int main(){
    int n=10;
    int count=1;
    for(int x=1;x<=20;x++){
    for(int i=1;i<=n;i++){
        printf("%d*%d=%d\n",count,i,count*i);
    }
    printf("\n");
    count++;
}
}