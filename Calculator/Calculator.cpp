#include "Calculator.h" //ทำการ #include ไฟล์ .h เข้ามา
                        //ทำให้ทั้ง 2 ไฟล์ รู้จักกันนั้นเอง เพื่อให้ ตัวหลัก (Class .h) รู้จักกับฟังก์ชั่น และสามารถเรียกใช้งานได้

Calculator::Calculator() { //ไฟล์ .cpp จะเห็นได้ว่าต้องประกาศชื่อ Class ที่เราตั้งใน .h เพื่อให้ Class หลักรู้จักกับฟังก์ชันของเรา

}


/*สามารถสร้าง ฟังก์ชันได้เลย โดย ประกาศ void ตามด้วย ชื่อ Class และเครื่องหมาย :: ตามด้วยชื่อฟังก์ชันที่เราจะตั้ง หลังจากนั้น ให้กำหนด ตัวแปรที่จะรับเข้ามาทำงาน ภายในฟังก์ชัน เหมือนที่อธิบายข้างต้นที่ผ่านมา

โดยภายในรูป ตัวอย่างฟังก์ชัน สามารถเรียกใช้ตัวแปร Sum ได้เลยเพราะ ในไฟล์ .h ประกาศ Public*/

void Calculator::Fn1(int value1,int value2) {
    Sum=value1+value2;
}

void Calculator::Fn2(int value1,int value2) {
    Sum=value1-value2;
}

void Calculator::Fn3(int value1,int value2) {
    Sum=value1*value2;
}

void Calculator::Fn4(int value1,int value2) {
    Sum=value1/value2;
}