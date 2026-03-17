#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nREverse order\n");
    for(int j=n-1;j>=0;j--){
            printf("%d ",arr[j]);
    }
    return 0;
}