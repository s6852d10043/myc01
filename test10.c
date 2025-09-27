/*
    break กับ continue ใน loop
    break; ทำงานเมื่อไหร่ ออกจาก loop เลย
    continue; ทำงานเมื่อไหร่ ถือว่าจบรอบนั้นเลย โดยไม่สนใจคำสั่งที่เหลือ ให้ไปรอบต่อไปทันที
*/

#include <stdio.h>  

int main(){
    int x;
    
    for(x = 1; x <= 10; x++){
        if(x == 3)
            break;
        printf("%d-SAU\n", x);
    }
    printf("\n\n+++++++++\n\n");
    for(x = 1; x <= 10; x++){
        if(x == 3)
            continue;;
        printf("%d-SAU\n", x);
    }

    printf("%d", x);
    return 0;
}