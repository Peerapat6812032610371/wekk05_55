#include <stdio.h>


int main() {

    // ประกาศตัวแปร

    char name = 'P';       // ตัวอักษรตัวแรกของชื่อ (พิมพ์ใหญ่)

    int age = 19;          // อายุของตัวเอง

    float weight = 56;   // น้ำหนักของตัวเอง



    // แสดงผลลัพธ์ออกหน้าจอ

    printf("Student %c is %d years old.\n", name, age); // แสดงชื่อและอายุ

    printf("His weighs is %.1f kg.\n", weight); // แสดงน้ำหนัก โดยใช้ %.1f เพื่อแสดงทศนิยม 1 ตำแหน่ง



    return 0; // จบโปรแกรมโดยส่งค่ากลับ 0 (แปลว่าโปรแกรมทำงานสำเร็จ)

}