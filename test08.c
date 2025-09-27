

/*
    switch(  expresstion  ) {
        case value1:
            คำสั่ง....
            break; ไม่มีก็ได้
        case value1:
            คำสั่ง....
            break;
        case value1:
            คำสั่ง....
            break;
         default: w,j,udHwfh
            คำสัั่ง....
            break;
    }

    *** value เป้นได้แค่ integer, character
*/

#include <stdio.h>

int main (){
    int level;

    printf("------------------\n");
    printf(" Welcome Student\n");
    printf("------------------\n");
    printf("Enter your level: ");
    scanf("%d", &level);
    printf("------------------\n");

    switch(level){
        case 1:
            printf("Hello, You are a freshman\n");    
            break;
        case 2:
            printf("Hello, You are a sophomore\n");
            break;
        case 3:
            printf("Hello, You are a junior\n");
            break;
        case 4:
            printf("Hello, You are a senior\n");
            break;
        default:
            printf("Hello, T_T\n");
            break;
}

    printf("------------------\n");
    return 0;
}