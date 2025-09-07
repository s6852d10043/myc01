// สร้างโปรแกรมคำนวณจำนวนเงิน ที่ต้องการหารกัน
// จากการรับค่าจำนวนเงินและจำนวนคนทางแป้นพิมพิ์

#include <stdio.h>

int main(){
    //ประกาศ ตัวแปร (Declare variable)
    double money,money_share;
    int person;
    printf("-----------------------------\n");
    printf("\tMoney Share\n");
    printf("-----------------------------\n");
    printf("Input money: ");
    scanf("%lf" , &money);
    printf("Input person: ");
    scanf("%d" , &person);
    money_share = money / person;
    printf("-----------------------------\n");
    printf("Money per person: %.2lf Bath\n" , money_share);
    printf("-----------------------------\n");
    
    return 0;
}
