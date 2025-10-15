//do-while문의 실습-2
//사용자 의중 물어 학점 출력

#include <iostream>
using namespace std;

int main(void) {

    int jumsu = 0, cnt = 1;// 점수 입력 시, 변수와 반복 횟수,카운팅 변수
    char op = ' ';

    do {
        cout << "<"<< cnt << "회 실행>>" << endl;
        // 사용자 의중 물어보는 코드
        cout << "프로그램을 시작하시겠습니까? (Y,y/N,n) : ";
        cin >>op;

        // 사용자 선택따라 프로그램 분기
        if (op == 'N' || op =='n') {
            cout << "총" << cnt << "회 수행 후 종료합니다." <<endl;
            break;
        }
        else if (op =='Y' || op == 'y') {
        re_jumsu :
            cout << "점수 입력 : ";
            cin >> jumsu;
            // cout << "학점 출력 위해 , 중첩if문을 작성" << endl;
            if (jumsu <= 100 && jumsu >= 90) {
                cout << "A학점" <<endl;
            }
            else if (jumsu < 90 && jumsu >= 80) {
                cout << "B학점" <<endl;
            }
            else if (jumsu < 80 && jumsu >= 70) {
                cout << "C학점" <<endl;
            }
            else if (jumsu < 70 && jumsu >= 60) {
                cout << "D학점" <<endl;
            }
            else if (jumsu >= 0 && jumsu < 60) {
                cout << "F학점" <<endl;
            }
            else {
                cout << "점수 " << jumsu << "는(은) 허용구간이 아닙니다." << endl;
                cout << "점수를 다시 입력해주세요." << endl;
                cnt++;
                goto re_jumsu;
            }
            cnt++;
        }
    } while (true);

}