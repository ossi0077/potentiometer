#define input A0

void setup()
{
	//시리얼 통신 시작
	Serial.begin(9600);
	Serial.println("start");
	Serial.println("======================");
}

void loop()
{
	//가변저항의 값을 시리얼 모니터에 표시
	Serial.println(analogRead(input));
	delay(1000);
}
