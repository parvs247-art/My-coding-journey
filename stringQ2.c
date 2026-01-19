// find the salted form  of a password entered by user if the salt is "123" and added at the end

#include<stdio.h>
#include<string.h>

void salting(char password[]);
int main(){

    char password[100];
    scanf("%s",password);
    salting(password);
}
void salting(char password[]){
    char salt[]="123";
    char newpassword[200];

    strcpy(newpassword, password); //newpassword="test"
    strcat(newpassword,salt); //newpass= test+123
    puts(newpassword);
}