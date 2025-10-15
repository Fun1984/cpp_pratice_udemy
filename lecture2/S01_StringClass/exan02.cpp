//string 클래스에서 실습 - 2
//string 클래스를 이용한 입출력 <<, >> 연산자 정의하여, 입출력 연산 구현 


#include <iostream>
#include <string>

using namespace std;

int main(void) {

    /*
    string str = "";
    cout << "주소를 입력 : ";
    cin >> str;
    cout << str << endl; // 표준입력 cin객체로, 공백 (' ')을 만나면 끊어서 앞단만 출력됨
    */
    

    //getline() : 위와 같이 공백까지 받아주는 함수
    // 1. cin 객체의 멤버함수 내 getline()
    // n-1까지 입력을 받는 데, 마지막값을 NULL로 바꿔 문자열 끝을 알림.
    // char배열 사용 + 문자길이 규격을 정해줘야함
    /*
    char ch[10] = {""};
    cout<< "주소를 입력 : ";
    cin.getline(ch, 100); //배열처럼 100 -1까지 받아준다. 
    cout << ch << endl;
    */
    


    // 2. string라이브러리 내 멤버 함수
    // string을 매개변수로 사용, 규격 제한 없음
    // getline(cin, str, x) : x=구분자(\,w) <- 어디까지 저장할지 정할 수 있음. 
    /*
    string str = "", name = "";
    cout<< "주소를 입력해 : ";
    getline(cin, str);
    cout << str << endl;
    cout<< "이름 입력 : ";
    getline(cin, name);
    cout << name << endl;
    */
    

    // 3. 혼용 시
    string str = "", name = "";
    cout << "이름 입력 : ";
    cin >> name;
    cin.ignore();//버퍼에 엔터키를 없애줌.
    
    cout << "주소를 입력 : ";
    getline(cin, str); //string라이브러리 getline()
    cout << str << endl;

    cout << name << endl;


    return 0;
}