#include<stdio.h>
#include<string.h>
int main(){
    char str[]={"NEHAL"};
    char name[6];
    char prof[10];
    printf("%s\n",str);
    strlen(str); // gets the length
    strcpy(name,str); // copies the str
    printf("%s\n",name);
    printf("%s\n",strcat(name,str));
    printf("Enter the profession\n");
    // gets(prof); old
    fgets(prof,10,stdin); // new and safe .....fgets(str,sizeof(),stdin)
    puts(prof);  // prints the output

    return 0;

}