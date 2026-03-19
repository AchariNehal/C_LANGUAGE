#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
void cal(int a,int b,int (*fptr)(int,int)){
    printf("%d\n",fptr(a,b));
}
int main(){
    cal(5,2,add);
    cal(5,2,sub);
    return 0;

}
