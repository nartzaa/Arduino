const int SW = 2;
const int led = 11;
int state = 0;
int push = 0;

void setup() {
    Serial.begin(9600);
    pinMode(SW, INPUT);
    analogWrite(led, 0);
}

void loop() {
    state = digitalRead(SW);
    if (state == LOW) {
        delay(300);
        push++;
        Serial.println(push);
        switch (push) {
            case 1:
                analogWrite(led, 90);
                break;
            case 2:
                analogWrite(led, 180);
                break;
            case 3:
                analogWrite(led, 255);
                break;
            default:
                analogWrite(led, 0);
                push = 0;
            break;
        }        
    }
}