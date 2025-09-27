/*
no parameter no return
no parameter has return
have parameter no return
have parameter has return

no parameter no return

*/

#include <stdio.h>  

void showHi();

void showHello(){
    printf("Hello...\n");
}

int main(){
    showHello();
    showHi();
    return 0;
}

void showHi(){ 
    printf("Hi...\n");
}