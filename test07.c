/*
    if(  เงื่อนไข   ) {
        คำสั่ง...
    }else if(  เงื่อนไข   ) {
        คำสั่ง...
    }else if(  เงื่อนไข   ) {
        คำสั่ง...
    }else if(  เงื่อนไข   ) {
        คำสั่ง...
    }else{
        คำสั่ง...
    }
*/
 
#include <stdio.h>
int level;  //ประกาศตัวแปร (Declare Global variable)
 
int main(){
    // int level;  //ประกาศตัวแปร (Declare Local variable)
   
    printf("-------------------\n");
    printf(" Welcome Student\n");
    printf("-------------------\n");
    printf("Enter your level: ");
    scanf("%d", &level);
    printf("--------------------\n");
 
    if (level == 1){
        printf("Hello, You are a freshman\n");
    }else if (level == 2){
        printf("Hello,You are a sophomore\n");
    }else if (level == 3){
        printf("Hello,You are a junior\n");
    }else if (level == 4){
        printf("Hello,You are a senior\n");
    }else {
        printf("Hello, T_T\n");
    }
 
    printf("--------------------\n");
    return 0;
}