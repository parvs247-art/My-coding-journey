// CODE TO FIND AGE OF A PERSON 
#include<stdio.h>

int main(){
int cd,cm,cy,bd,bm,by;
int day,month,year;

printf("enter the current date (dd mm yyyy) :");
scanf("%d %d %d", &cd,&cm,&cy);

printf("enter the birth date (dd mm yyyy):");
scanf("%d %d %d", &bd,&bm,&by);

if(bd>cd){
    cd+=30;
    cm-=1;

}
if(bm>cm){
    cm+=12;
    cy-=1;

}
day = cd-bd;
month = cm-bm;
year = cy-by;

printf("Age= %d year %d months %d days \n", year , month , day);
return 0;


}
 