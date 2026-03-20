#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    FILE*file;
    file=fopen("odd.txt","w");
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i%2!=0){
            fprintf(file,"%d\t",i);
        }
    }

    fclose(file);
    return 0;
}