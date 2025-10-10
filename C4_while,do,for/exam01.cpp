//while 문 실습 - 1
//while 문 : 무한루프 전용. for문에 비해 초기값, 조건식, 증감식이 각각 따로 떨어짐.


#include <iostream>

using namespace std;

int main(void) {

    int su = 0, cnt = 0, hap = 0;

re: //goto문을 위한 레이블 이름 설정
    cout << "어디까지 합을 구할까요? : ";
    cin >> su;
    //음양수에 따라 분기
    if (su < 0) {
        cout << "음의 정수는 허용하지 않습니다. "<< endl;        
        cout << "프로그램을 다시 시작합니다." << endl;
        goto re;
    }
    else {
        cnt = 1;
        while (cnt <= su) {
            hap += cnt; //누적값, hap = hap + cnt
            cout << cnt << "회 반복 누적합 :" << hap << endl;
            cnt++;
        }
        cout << "1부터 " << su << "까지 누적합 : " << hap << endl;
    }

    return 0;
}