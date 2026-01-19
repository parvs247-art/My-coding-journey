// structure to store bank account info of a costumer of abc bank, also make a alias for it

#include<stdio.h>
#include<string.h>

typedef struct bankaccount{
    int accountNo;
    char name[100];
} acc;

int main(){
    acc acc1= {123,"parv"};
    acc acc2={124,"riya"};
    acc acc3={125,"shruti"};

    printf("acc no=%d\n", acc1.accountNo);
    printf("name=%s\n", acc1.name);
    printf("acc no=%d\n", acc2.accountNo);
    printf(" name=%s\n", acc2.name);
    printf("acc no.=%d\n", acc3.accountNo);
    printf(" name=%s\n",acc3.name);
    return 0;
}