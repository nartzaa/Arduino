#ifndef _CALCULATOR_H
#define _CALCULATOR_H

class Calculator {///ประกาศชื่อ Class ( ตัวอย่าง จะใช้ชื่อ Calculator )    
    public: /*ประกาศแบบ Public

            Public คือ เรียกใช้ตัวแปรหรือฟังก์ชัน ได้ทุกไฟล์ เพียงแค่ #include .h ข้างบนไฟล์

            Private คือ เรียกใช้ตัวแปรหรือฟังก์ชัน ได้แค่ภายในไฟล์ .h เท่านั้น*/

        int Sum=0;  //ประกาศตัวแปร ชื่อ Sum ชนิด int เพื่อนำมาเก็บค่าผลรวม

        Calculator();   //ประกาศฟังก์ชัน ชื่อเดียวกับ Class เพื่อให้ ฟังก์ชันในไฟล์ .cpp รู้จักกับ Class หลัก

        // ให้ตั้งชื่อฟังก์ชันได้เลย พร้อมกับ กำหนดตัวแปรที่จะรับเข้ามา
        void Fn1(int value1,int value2);
        void Fn2(int value1,int value2);
        void Fn3(int value1,int value2);
        void Fn4(int value1,int value2);
};

#endif // _CALCULATOR_H