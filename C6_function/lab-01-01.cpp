#include <iostream>
#include <stdio.h>
#include "my_calc_c.h"

using namespace std;

int main(void) {
    int num1 = 0, num2 = 0, remain_num = 0;
    double result = 0.0;
    char choice = 'Y', op = '_';
    while (true) {
        cout << "두 수를 입력하세요 : ";
        scanf_s("%d, %d", &num1, &num2);
        // cout << num1 << ", "<< num2;

        //어떤 연산을 할 것인지를 연산자를 받아야 함.
        cout << "연산자를 선택하세요(+,=-,*,/,%) : ";
        // cout >> op;
        cin >> op;

        switch (op) {
            case '+' :
                result = add(num1, num2);
                // cout.fixed;
                // cout.precision(1);
                cout.setf(ios::fixed); // 고정 소수점 자리 출력
                cout.setf(ios::showpoint); //소수점 자리를 보여준다.
                cout.precision(1);//소수점 1자리를 보여준다.

                cout << "덧셈 함수 호출 후 결과값은 " <<result <<"입니다." <<endl;
                // printf("덧셈 함수 호출 후 결과값은 %.1f\n", result)
                cout << "계속 연산을 진행하시겠습니까(Y/N) :";
                cin >> choice;
                break;
            case '-' :
                result = sub(num1, num2);
                // cout.fixed;
                // cout.precision(1);
                cout.setf(ios::fixed); // 고정 소수점 자리 출력
                cout.setf(ios::showpoint); //소수점 자리를 보여준다.
                cout.precision(1);//소수점 1자리를 보여준다.

                cout << "뺄셈 함수 호출 후 결과값은 " <<result <<"입니다." <<endl;
                // printf("덧셈 함수 호출 후 결과값은 %.1f\n", result)
                cout << "계속 연산을 진행하시겠습니까(Y/N) :";
                cin >> choice;
                break;
            case '/' :
                result = divide(num1, num2);
                // cout.fixed;
                // cout.precision(1);
                cout.setf(ios::fixed); // 고정 소수점 자리 출력
                cout.setf(ios::showpoint); //소수점 자리를 보여준다.
                cout.precision(1);//소수점 1자리를 보여준다.

                cout << "나눗셈 함수 호출 후 결과값은 " <<result <<"입니다." <<endl;
                // printf("덧셈 함수 호출 후 결과값은 %.1f\n", result)
                cout << "계속 연산을 진행하시겠습니까(Y/N) :";
                cin >> choice;
                break;
            case '*' :
                result = mul(num1, num2);
                // cout.fixed;
                // cout.precision(1);
                cout.setf(ios::fixed); // 고정 소수점 자리 출력
                cout.setf(ios::showpoint); //소수점 자리를 보여준다.
                cout.precision(1);//소수점 1자리를 보여준다.

                cout << "곱셈 함수 호출 후 결과값은 " <<result <<"입니다." <<endl;
                // printf("덧셈 함수 호출 후 결과값은 %.1f\n", result)
                cout << "계속 연산을 진행하시겠습니까(Y/N) :";
                cin >> choice;
                break;
            case '%' :
                result = remain(num1, num2);
                cout << "나눗셈 나머지 함수 호출 후 결과값은 " <<result <<"입니다." <<endl;
                // printf("덧셈 함수 호출 후 결과값은 %.1f\n", result)
                cout << "계속 연산을 진행하시겠습니까(Y/N) :";
                cin >> choice;
                break;
            default :
                cout << "잘못된 입력값입니다.\n" ;
                cout << "계속 연산을 진행하시겠습니까(Y/N) :";
                cin >> choice;
                break;
            }
        if (choice == 'N' || choice == 'n') {
                    cout << "프로그램을 종료합니다." << endl;
                    exit(0);
            }
        }
}