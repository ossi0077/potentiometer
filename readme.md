# potentiometer (가변저항)
	- 저항값을 변화시킬 수 있는 소자
	- 볼륨 조절, 빛의 밝기 조절등에 사용 가능

## 필요 하드웨어
	- 가변저항(본문에서는 B10K)사용
	- Arduino UNO
	- UNO cable
	- breadboard
	- M-M cable(3ea)

## 연결
	- 가변저항의 경우 왼쪽과 오른쪽에 전원을 인가 후 가운데로 출력이 나오는 방식
	- 왼쪽 또는 오른쪽에 전원 인가 후 반대편 단자에 GND연결, 가운데 단자는 출력
|가변저항|Arduino UNO|
|---|---|
|왼쪽 단자|GND|
|가운데 단자|A0(다른 아날로그 핀 사용 가능)|
|오른쪽 단자|5V|

## example_code.cpp 참고