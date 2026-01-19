// grade of the students
#include<stdio.h>
int main (){
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);

    if(marks>=90 && marks <=100){
        printf("A grade");

    }else if(marks>=80 && marks<90){
        printf("B grade");

    }else if(marks>=65 && marks<80){
        printf("C grade");
    }else{
        printf("Fail");
    }
    return 0;
}
