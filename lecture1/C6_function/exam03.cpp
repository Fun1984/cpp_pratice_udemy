// 수학함수 실습 -2

#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

    int choice = 0;
    double result = 0.0, num1 = 0.0, num2 = 0.0;

    do
    {
        cout << "1. 제곱값 출력 프로그램 " << endl;
        cout << "2. 제곱근 출력 프로그램 " << endl;
        cout << "3. 프로그램 종료 " << endl;
        
        cout << "번호 선택 : ";
        cin >> choice;
        
        if (cin.fail()) { // 숫자 외의 값이 들어왔을 때
            cout << "번호 1,2,3만 허용합니다." << endl;
            cout << "프로그램을 다시 시작하세요." << endl << endl; 
            // goto re를 이용해서, 상단에 re:를 넣어서 실행해보려 했지만 실상 안됨. (chatgpt에 물어보기.)
            return 0;
        }

        switch(choice) {
            case 1 : 
                cout << "1. 제곱값 출력 프로그램 " <<endl;
                cout << "제곱 대상 실수 입력 : ";
                cin >> num1;
                cout << "지수(승) 입력 : ";
                cin >> num2;
                
                result = pow(num1, num2); //제곱값 계산
                cout << num1 << "의" << num2 << "승의 결과값 : " << result << endl << endl;
                break;
            case 2 :
                cout << "2. 제곱근 출력 프로그램 " <<endl;
                cout << "제곱근을 구할 실수 입력 : ";
                cin >> num1;
                
                result = sqrt(num1); //제곱근 계산
                cout << num1 << "의" << num2 << "제곱근 결과 값 : " << result << endl << endl;
                break;
            case 3 : 
                cout << "프로그램을 종료합니다." << endl << endl;
                return 0;
                break;
            default : //에러처리
                cout << "선택 오류! 숫자 1,2,3 중에서 선택하세요." << endl << endl;
                break;
            }
    } while (true);
    return 0;
}