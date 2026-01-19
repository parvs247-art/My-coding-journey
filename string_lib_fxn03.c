#include<stdio.h>
#include<string.h>

int main(){

   char firststr[]="hello ";
   char secstr[]="world";
   strcat(firststr,secstr);
   puts(firststr);
}