// 05_practice_2.ino
const int LED_PIN = 7;
const int ON_STATE  = LOW;   // 5V-저항-LED-Pin7 구성: LOW가 켜짐
const int OFF_STATE = HIGH;  // HIGH가 꺼짐

void setup() {
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, OFF_STATE); // 시작 시 LED 꺼짐 보장
}

void loop() {
    // (1) 처음 1초 동안 LED 켜기
    digitalWrite(LED_PIN, ON_STATE);
    delay(1000);

    // (2) 다음 1초 동안 5회 깜빡임 (100 ms on + 100 ms off) × 5 = 1000 ms
    for (int i = 0; i < 5; i++) {
        digitalWrite(LED_PIN, ON_STATE);
        delay(100);
        digitalWrite(LED_PIN, OFF_STATE);
        delay(100);
    }

    // (3) LED 끄고 무한루프
    digitalWrite(LED_PIN, OFF_STATE);
    while (1) { /* 종료 대기(무한 루프) */ }
}
