#include<stdio.h>   //odd or even
int main (){
int number;

printf("enter the number :");
scanf("%d",&number);

if(number%2==0){
    printf("even");
}else{
   printf("odd ");
}
return 0;
}