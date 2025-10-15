//문제-2
// 사용자로부터 받은 문자열에서 각각의 문자가 나타나는 빈도를 계산하여, 출력하는 프로그램을 작성해보자. 

//실행결과
//문자열을 입력하시오 : abcdee
// a : 1 
// b : 1 
// c : 1 
// d : 1 
// e : 2

#include <iostream>
#include <string>

using namespace std;

int main(void) {

    int counters[256] = {0};
    string str = "";
    cout << "문자열을 입력하시오 : ";
    getline(cin,str);

    for (int i = 0; i < str.size(); i++) {
        counters[str[i]]++; //빈도수 계산 // counters에 문자열이 들어가면, 숫자로 변환됨. ++는 1을 더해넣음. 즉, 해당 위치로 이동하여 1씩 값을 추가하게 됨. 
    }
    for (int i = 0; i < str.size(); i++) {
        if ( str.find(str[i], i+1) > str.size() ) {
            cout << str[i] << " : " << counters[str[i]] << endl;
        }
    }
    char c = 20;
    cout << c ;
    return 0;
}

