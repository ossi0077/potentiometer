#define input A0

void setup()
{
	//�ø��� ��� ����
	Serial.begin(9600);
	Serial.println("start");
	Serial.println("======================");
}

void loop()
{
	//���������� ���� �ø��� ����Ϳ� ǥ��
	Serial.println(analogRead(input));
	delay(1000);
}
