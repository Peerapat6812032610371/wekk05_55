#include <stdio.h>

int main() {
// ข้อมูลส่วนบุคคล
char name[30] = "Pee"; // ชื่อเล่น
int age = 19; // อายุ
float height = 173.0; // ส่วนสูงเป็นเซนติเมตร

// ข้อมูลผลการเรียน
char subject = 'M'; // M แทน Math
float grade = 3.00; // เกรดเฉลี่ย 3.00
char symbol = 'B'; // B แทนเกรดดีมาก

// แสดงผลลัพธ์
printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height); // แสดงชื่อ อายุ และส่วนสูง
printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol); // แสดงวิชา เกรด และสัญลักษณ์เกรด

return 0;

}   
