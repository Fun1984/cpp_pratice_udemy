//string클래스에 실습 - 4
// 나머지 멤버 함수

#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string str = "hello";

    // 문자열 출력
    for (int i=0; i<str.length(); i++) {
        cout << str[i];
    }
    cout << endl;

    //문자열 반복자(iterator)
    string::iterator iter = str.begin(); //문자열의 시작지점을 iterator(반복자)로 선언
    for(iter; iter<str.end(); iter++) { //아주 큰 차이는 없지만, 객체단의 반복작업에 유용함
        cout << *iter;
    }
    cout << endl;

    //swap, copy, find
    char arr[10] ={ ' ' };
    int len = 0;
    string s1 = "hello";
    string s2 = "el";

    len = s1.copy(arr, 3, 1); //string을 index만큼 복사한 후, 실제 복사한 길이를 반환. 
    //    s1.copy(arr, 3, 1) -> s1의 1번째 자리에서 3만큼 복사해서, arr에 넣어라. 그리고 길이를 반환해라.
    arr[len] = '\0'; //끝자리에 null을 넣어서 닫아줌. //문자배열이기에 반드시 추가해야함.
    cout << len << endl;
    cout << arr << endl;

    //find
    cout << s1.find(s2) << endl; //s1에서 s2를 찾아, 시작index를 반환
    cout << s1.find(s2,1) << endl; //s1에서 s2를 찾아라, 1번째 자리를 시작점으로 한다.
    cout << s1.find(s2,2) << endl; //찾지 못할 시, 엉뚱한 값을 발생시킴.

    //swap
    swap(s1, s2); //s1과 s2의 포인터 교환
    cout<<s1<<endl;
    cout<<s2<<endl;
    
    return 0;
}