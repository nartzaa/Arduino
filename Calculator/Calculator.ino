//Test comment
#include "Calculator.h"

void setup(){
    Serial.begin(9600);
}
void loop(){
    Calculator Cal;
    Cal.Fn1(20, 30);
    Serial.println(Cal.Sum);
    Cal.Fn2(20, 30);
    Serial.println(Cal.Sum);
    Cal.Fn3(20, 30);
    Serial.println(Cal.Sum);
    Cal.Fn4(20, 30);
    Serial.println(Cal.Sum);
    Serial.println("-------");
    delay(1000);
}