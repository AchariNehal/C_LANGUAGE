#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[100];
    int id;
    float cgpa;
}s;
int main(){
    FILE*file;
    file=fopen("student.txt","w");
    strcpy(s.name,"Nehal");
    fprintf(file,"%s\n",s.name);
    s.id=77;
    fprintf(file,"%d\n",s.id);
    s.cgpa=9.00;
    fprintf(file,"%f\n",s.cgpa);
    fclose(file);
}