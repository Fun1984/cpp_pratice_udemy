//함수 종합 실습 예제
//계산기 프로그램을 한 번 만들어 보도록 하자. 

// 무한루프를 돌도록 하고, 아래와 같이 함수를 5 모듈 분리
// 헤더파일 명은 my_calc.h 파일로 작성
// 함수 선언부
//double add(int x, int y)
//double sub(int x, int y)
//double mul(int x, int y)
//double div(int x, int y)
//int remain(int x, int y)

////////

// #include <iostream>
#include "my_calc.h"
// using namespace std;

double add(int num1, int num2);
double sub(int num1, int num2);
double div2(int num1, int num2);
double mul(int num1, int num2);
int remain(int num1, int num2);

int main(void) {
    do
    {
        int num1 = 0, num2 = 0;
        char cal = '_';
        char go = 'y';
        cout << "두 수를 입력하세요 : " ;
        cin >> num1;
        cout << ", ";
        cin >> num2;


        cout << "연산자를 선택하세요(+, -, /, *, %) : ";
        cin >> cal;
        if (cal=='+') {double add(num1, num2);}
        else if (cal=='-') {double sub(num1, num2);}
        else if (cal=='/') {double div2(num1, num2);}
        else if (cal=='*') {double mul(num1, num2);}
        else if (cal=='%') {int remain(num1, num2);}
        else {cout << "알 수 없는 연산자입니다." << endl;}

        cout << "계속 연산을 하시겠습니까? (y / n) : ";
        cin >> go;
        if (go == 'y') {
            continue;
        } else if(go =='n') {
            return 0;
        }
        cout << endl << endl;
        
    } while (true);
    

    return 0;
}