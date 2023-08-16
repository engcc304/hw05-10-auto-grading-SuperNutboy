/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    #TODO #20 : fix this code without if else syntax. 
    (กำหนดให้ข้อนี้ใช้คำสั่ง switch case ได้เท่านั้น)
    
    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !
*/
#include <stdio.h>

int main() {
    int score; // ประกาศตัวแปรเก็บคะแนนดิบ

    printf("enter score :\n"); // แสดงข้อความรับคะแนนดิบ
    scanf("%d", &score); // รับค่าคะแนนดิบจากผู้ใช้

    switch (score) { // เริ่มต้นใช้ switch case โดยใช้ค่า score เป็นตัวเลือก
        case 80 ... 100: // ระหว่าง 80 ถึง 100
            printf("A !\n");
            break; // หยุดการทำงานใน switch case

        case 75 ... 79: // ระหว่าง 75 ถึง 79
            printf("B+ !\n");
            break;

        case 70 ... 74: // ระหว่าง 70 ถึง 74
            printf("B !\n");
            break;

        case 65 ... 69: // ระหว่าง 65 ถึง 69
            printf("C+ !\n");
            break;

        case 60 ... 64: // ระหว่าง 60 ถึง 64
            printf("C !\n");
            break;

        case 55 ... 59: // ระหว่าง 55 ถึง 59
            printf("D+ !\n");
            break;

        case 50 ... 54: // ระหว่าง 50 ถึง 54
            printf("D !\n");
            break;

        default: // ถ้าไม่ได้ตรงกับเคสใดเลย
            printf("F !\n");
    }

    return 0;
}