//종합실습 예제-3(while)
//출력결과와 같이 무한루프를 돌리면서, 프로그램을 작성하시오.
// 출력결과 : 

#include <iostream>

using namespace std;
/*
int main(void) {
    int select = 0;
    int current = 0;

    
    do {
        cout << "------------------------" << endl;
        cout << "1.증속 | 2.감속 | 3.중지" << endl;
        cout << "------------------------" << endl;
        cout << "선택 : " ;
        cin >> select;

        if (select == 1) {
            current += 1;
            cout << "현재 속도 : " << current<< endl;
        }else if (select == 2) {
            current -= 1;
            cout << "현재 속도 : " << current<< endl;
        }else if (select == 3) {
            continue;
        }else {
            cout << "잘못된 입력값입니다."<<endl;
        }
    } while(select != 3);
    cout << "프로그램 종료"<< endl;

    return 0;
}*/


int main(void) {
    bool flag = true; //플래그 변수의 역할
    int speed = 0, keyCode = 0; //속도변수, 메뉴 선택 저장 변수

    //무한 루프 시작
    while (flag) {
        cout << "------------------------" <<endl;
        cout << "1.증속 | 2.감속 | 3.중지" <<endl;
        cout << "------------------------" <<endl;

        //메뉴 입력
        cout << "선택 : ";
        cin >>keyCode;

        if (keyCode == 1) {
            speed++;
            cout << "현재 속도 : " << speed << endl;
        }
        else if (keyCode == 2) {
            speed--;
            if (speed <0) {
                cout << "속도는 음수가 될 수 없습니다." << endl;
                speed = 0;
            }
            cout << "현재 속도 : " << speed << endl;
        }
        else if (keyCode == 3) {//무한 루프 탈출 코드
            flag = false;
        }
        else {
            cout << "잘못된 입력값입니다." << endl;
        }
    }
    cout << "프로그램 종료" << endl;
    return 0;
}