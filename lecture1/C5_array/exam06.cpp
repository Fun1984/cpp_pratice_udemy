//2차원 배열 실습
//환자수 3명의 대한 5번 혈압 체크 후 고혈압인지 정상인지를 확인하는 프로그램 만들기

#include <iostream>
#define ROW 3
#define COL 5
using namespace std;

int main(void) {

	int cnt = 0, sno = 201012101, total = 0;
	double avg = 0.0;
	//2차원 배열을 실제값으로 초기화 한 것이다.
	int bd[ROW][COL] = {
						{135,150,148,160,153},
						{115,120,123,121,112},
						{132,129,128,133,130}
					   };
	cout << ">> 고혈압 판정 기준 : 수축기 혈압 140 초과 " << endl;
	//싱글 루프로 프로그램 작성(권장드리지 않는 방법)
	/*for (cnt = 0; cnt < ROW; cnt++) {
		//한명당 혈압을 다 덧셈
		total = bd[cnt][0] + bd[cnt][1] + bd[cnt][2] + bd[cnt][3] + bd[cnt][4];
		avg = (double)total / COL;	//강제 자료형 변환
		
		cout << endl;
		cout << "★환자 " << cnt + 1 << "의 수축기 평균 혈압 및 판정" << endl;
		cout << "환자 번호 : " << sno++ << endl;   //환자번호 출력
		cout << fixed;
		cout.precision(2);	//소수점 자리 2개
		cout << "평균 혈압 : " << avg << endl;
		
		//혈압을 판정하는 코드
		if (avg > 140.0) {
			cout << "판정 : 고혈압입니다.건강에 신경쓰세요." << endl;
		}
		else {
			cout << "판정 : 정상입니다." << endl;
		}		
	}*/

	//더블 루프로 프로그램 작성(C++ 배열 포인터 이용한 스타일)
	for (int(&cnt2)[COL] : bd) {
		for (int i : cnt2) {
			total += i;
		}
		avg = (double)total / COL;
		cnt = cnt + 1;
        cout << "★환자 " << cnt << "의 수축기 평균 혈압 및 판정" << endl;
		cout << "환자 번호 : " << sno++ << endl;   //환자번호 출력
		cout << fixed;
		cout.precision(2);	//소수점 자리 2개
		cout << "평균 혈압 : " << avg << endl;
			
		//혈압을 판정하는 코드
		if (avg > 140.0) {
			cout << "판정 : 고혈압입니다.건강에 신경쓰세요." << endl;
		}
		else {
				cout << "판정 : 정상입니다." << endl;
		}		
		total = 0;  //total 변수를 다시 0으로 저장한다. 그 이유는 바로 계속 누적되고 있기 때문이다.

	}
	return 0;
}