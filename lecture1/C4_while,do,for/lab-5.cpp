//do~while문 이용한 무한루프. 
//중첩for문 구구단에서 2단에서 9단까지 출력하되, 사용자 의중 물어보는 코드 필요
//프로그램 실행 카운트하여, 출력

#include <iostream>

using namespace std;

/*
int main(void) {
    int count = 1;
    char order = ' ';
    bool flag = true;
    do {
        cout << "< " << count << " 회 실행 >" <<endl;
        for (int i=1;i<=9;i++){
            for (int j=2;j<=9;j++) {
                cout << j << " x " << i << " = " << i*j <<"  ";
            }
            cout << endl;
        }
        
    re:
        cout << "프로그램을 다시 실행하겠습니까? (Y,y|N,n) : " ;
        cin >> order;

        if ((order == 'Y') || (order =='y')) {
            flag = true;
        } else if ((order == 'N') || (order =='n')) {
            flag = false;
        } else {
            cout << "잘못 입력했습니다." <<endl;
            goto re;
        }
        count++;
    } while (flag);
    cout << "총 " << count << "회 실행 후 프로그램을 종료합니다." << endl;
    return 0;
}
*/

int main(void) {
    int dan = 0, cnt = 0, recnt = 1, gob = 0;
    char yn = ' ';

    //무한루프 시작
    do {
        cout << "< " << recnt << " 회 실행 >" << endl;
        for (cnt = 1; cnt <= 9; cnt++){
            for (dan = 2; dan <= 9; dan++)
            {
                gob = dan * cnt;
                cout << dan << "*" << cnt << "=" << gob<< "\t";
            }
            cout << endl;
        }
        //사용자 의중 
    re:
        cout << "프로그램을 다시 실행하시겠습니까?(Y,y|N,n) : ";
        cin >> yn;

        switch (yn) {
            case 'Y' :
            case 'y' :
                recnt ++;
                continue;
            case 'N' :
            case 'n' :
                cout << "총 " << recnt << "회 실행 후 프로그램을 종료합니다." << endl;
                return 0;
                break;
            default:
                cout << "입력하신 알파벳 \""<<yn <<"\"는(은) 허용하지 않습니다" << endl;
                cout << "알파벳을 다시 입력하세요" << endl;
                goto re;
                break;
        }

        
    } while (true);
}