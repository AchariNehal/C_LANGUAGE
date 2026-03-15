#include<stdio.h>
#include<stdlib.h>
int main(){
    int choice,a,b,result;
    float c;
    while(1){
    printf("\n_________MENU________\n");
    printf("\n1.Addiution\n");
    printf("\n2.subtraction\n");
    printf("\n3.Multiplication\n");
    printf("\n4.Division\n");
    printf("\n5.Exit\n");

    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("Enter the value of a:");
               scanf("%d",&a);
               printf("\nEnter the value of b:");
               scanf("%d",&b);
               result=a+b;
               printf("%d\n",result);
               break;
        case 2:printf("Enter the value of a:");
               scanf("%d",&a);
               printf("\nEnter the value of b:");
               scanf("%d",&b);
                result=a-b;
               printf("%d\n",result);
                break;
        case 3:printf("Enter the value of a:");
               scanf("%d",&a);
               printf("\nEnter the value of b:");
               scanf("%d",&b);
               result=a*b;
               printf("%d\n",result);
                break;
        case 4:printf("Enter the value of a:");
               scanf("%d",&a);
               printf("\nEnter the value of b:");
               scanf("%d",&b);
               c=(float)a/b;
              printf("%f\n",c);
                break;
        case 5: exit(0);
        default:
             printf("INVALID CHOICE");
    }
}
    return 0;
}