#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6}; // 1 3 6 10 15 21
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<len;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for(int x=0;x<len;x++){
        printf("%d ",arr[x]);
    }
    return 0;
}