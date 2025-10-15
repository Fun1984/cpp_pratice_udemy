// 유틸리티 함수에 대한 실습 - 2
// system()함수 실습
// C에서 system()의 용도는 콘솔창의 제목을 설정하는 것
// C++에서 윈도우 창에서 실행에서 명령어를 대신 실행시켜주는 기능을 하고, 
// 프로그램을 대기 상태로 만들어주기도 한다. 

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {

    int cnt = 0, hap = 0;

    cout << "하나의 정수를 입력 : ";
    cin >> cnt;

    // system("pause"); //pause를 문자열로 주면, (아무 키를 입력할 때 까지) 프로그램을 대기 시킴.
    // system("notepad"); //notepad를 주면, 메모장을 출현 시킴.
    // system("explorer.exe"); //local의 폴더탐색창 출현
    // system("COLOR f0"); // 콘솔창을 흰색으로 바꿈. 
    // system("excel.exe"); //window cmd 명령어들을 기반으로 함. 윈도우cmd 명령어 <- 이 단어 검색해서 넣으면 웬만해선 된다.
    system("time");
    cout << cnt << endl; 
    cout << "프로그램 종료";

    return 0;
}