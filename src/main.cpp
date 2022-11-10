#include <Arduino.h>
#include <Servo.h>

Servo servo5;  //サーボモータ制御用のインスタンス「servo5」を作成

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    servo5.attach(5);  // 5番ピンにサーボモータの制御を割り当て
}

void loop() {
    servo5.write(168);  // 168°の角度にサーボモータを動かす
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);  // 1000msec待機(1秒待機)
    digitalWrite(LED_BUILTIN, LOW);
    servo5.write(30);  // 90°の角度にサーボモータを動かす
    delay(1000);       // 1000msec待機(1秒待機)
    servo5.write(60);  // 180°の角度にサーボモータを動かす
    delay(1000);       // 1000msec待機(1秒待機)
    // 15°~168°の範囲内で制御可能

    //角度ではなく周期で指定してみました。参考：https://spiceman.jp/arduino-servo-library/
    // servo5.writeMicroseconds(700);
    // delay(1000);
    // servo5.writeMicroseconds(2200);
    // delay(1000);
}