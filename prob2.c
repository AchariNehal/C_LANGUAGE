#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *file;

    file = fopen("sum.txt", "r");
    
    if(file == NULL){
        printf("File not found!\n");
        return 1;
    }

    int a, b;

    fscanf(file, "%d", &a);
    fscanf(file, "%d", &b);

    fclose(file);

    file = fopen("sum.txt", "w");

    fprintf(file, "Sum = %d\n", a + b);

    fclose(file);

    return 0;
}