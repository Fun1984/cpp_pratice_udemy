//while문의 실습 - 2 (누적합계를 무한루프롤 변경)
// 무한 루프 돌릴 시, 빠져나갈 조건 제시(탈출시점)

#include <iostream>

using namespace std;

int main(void) {

    int su = 0, cnt = 0, hap = 0;

    int con = 0;

    bool condition  = true;

    while (condition) {//무한루프 위해 condition bool 값 줌.
        cout << "어디까지 합을 구할까요? : ";
        cin >> su;

        if (su < 0) {
            cout << "음의 정수는 허용하지않습니다"<< endl;
            cout << "프로그램을 다시 시작합니다." << endl;
            continue;
        }
        else { 
            cnt = 1;
            while (cnt <= su) {
                hap += cnt;
                cout << cnt << "회 반복 누적합 : " <<hap <<endl;

                //무한 루프 탈출
                if (hap > 50) {
                    cout << "누적합계가 50을 초과하여 프로그램을 종료합니다." << endl;
                    break;
                }
                cnt++;
    
            }
        }
        cout << "계속 하시겠습니까?(1:계속, 0:중지) : ";
        cin >> condition;
        if (condition == 0) {
            cout << "프로그램을 종료합니다." <<endl;
            break;
        }
    }

    

}