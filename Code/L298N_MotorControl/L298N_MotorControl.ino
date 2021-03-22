#define IN3         5
#define IN4         4
#define Motor2_PWM  3

int value = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(IN3, OUTPUT);               // H-Bridge Switch 1
  pinMode(IN4, OUTPUT);               // H-Bridge Switch 2
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0;i < 255;i+=50){
    analogWrite(Motor2_PWM, value);   // PWM 신호를 value만큼 인가
    delay(1000);                      // 1초 delay
  }
  for(int i = 255;i > 0;i-=50){
    analogWrite(Motor2_PWM, value);   // PWM 신호를 value만큼 인가
    delay(1000);                      // 1초 delay
  }
}
