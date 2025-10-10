// 유틸리티 함수에 대한 실습 - 1
// exit(int) : return 0; 외 에 실행중인 프로세스를 강제 종료 시 사용하는 함수
// 매개변수가 0일 경우, 오류가 없음
// 매개변수가 1일 경우, 오류가 발생함

#include <iostream>
#include <cstdlib> //exit()가 정의되어 있음.

using namespace std;

int main(void) {

    int cnt = 0, hap = 0;

    while (true) {
        hap += cnt; 
        
        if(hap >= 100) {
            cout << "합계가 100 이상이 되었습니다. " << endl; 
            cout << "프로그램 종료" << endl;
            exit(0); // 실행 프로세스의 종료
            //return 0; // <- 함수의 종료 //개인적으론 추천
            //break;
        }
        cnt++;
    }
    return 0;
}