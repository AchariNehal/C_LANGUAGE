#include<stdio.h>
#include<string.h>
struct student{
    char name[10];
    int id; 
    int seat_no;
}s;
int main(){
    strcpy(s.name,"john");
    s.id=77;
    s.seat_no=23;
    printf("The student details are:-\n");
    printf("Name: %s\n",s.name);
    printf("ID: %d\n",s.id);
    printf("Seat No: %d\n",s.seat_no);
    return 0;
}