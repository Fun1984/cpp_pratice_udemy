//문제
//사용자로부터 문자열 5개를 읽고, 가장 긴 문자열을 화면에 출력하시오.
//실행결과
//문자열을 입력하시오 : abc
//문자열을 입력하시오 : abcd
//문자열을 입력하시오 : abcde
//문자열을 입력하시오 : abcdef
//문자열을 입력하시오 : abcdefg
//문자열을 입력하시오 : abcedddddd
// 가장 긴 문자열은 abcedddddd입니다.


#include <iostream>
#include <string>

using namespace std;

#define LENGTH 5

int main(void) {
    /*
    string answer_list[5] = {""};
    
    for (int c=0; c < LENGTH; c++) {
        cout << "문자열을 입력하시오 : ";
        cin >> answer_list[c];
    }
    
    string a = "";
    int b = 0;
    for (int i=0; i < LENGTH; i++) {
        for (int j=0; j <LENGTH; j++) {
            if (answer_list[i].length() > answer_list[j].length() ) {
                continue;      
            } else {
                a = answer_list[j];
                b =  j;
            }
        }
        if (answer_list[b].length() > answer_list[(b+i)%LENGTH].length() ) {
            continue;
        } else {
            a = answer_list[(b+i)%LENGTH];
            b = (b+i)%LENGTH;
        }
    }
    cout << "가장 긴 문자열은 " << a << "입니다." << endl;
    */
    
    string str[LENGTH] = {""};
    for (int i = 0; i < LENGTH; i++) {
        cout << "문자열을 입력하시오 : ";
        cin >> str[i];
    }
    string max = str[0];
    for (int i=1; i<LENGTH; i++) {
        if (str[i].size() > max.size()) {
            max = str[i];
        }
    }
    cout << "제일 긴 문자열 : " << max << endl;
    
    
    

    return 0;
}