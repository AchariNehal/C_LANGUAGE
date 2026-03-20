#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*file;
    file=fopen("boo.txt","w");
    char ch;
    // fscanf(file,"%c",&ch);  // takes the input from the file and store in ch        /*
    //  printf("character:%c\n",ch);                                                            only in r(read) mode
    //  printf("character:%c",fgetc(file)); //takes the input from the file and prints   */
    
    fputc('a',file); //overwrites the data,used in write(w) mode
  
    fclose(file);
    return 0;
}