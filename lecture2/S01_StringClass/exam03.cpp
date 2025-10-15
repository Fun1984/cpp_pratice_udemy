// string클래스 실습 -3
// 멤버 함수-함수 형태를 취하지만, 클래스 안에 함수가 정의됨. 

#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string str= "Hello";
    //s[i] = 실제 값
    //문자열 접근 멤버함수들
    cout << str[0] << endl;
    cout << str.at(0) << endl;
    cout << str.front() << endl;
    cout << str.back() << endl;
    
    //문자열 용량
    string str1 ;
    cout << str1.empty() << endl; // 1 = 비어있는 게 맞다.
    cout << str1.capacity() << endl; //기본적으로 15를 가짐.(가변적임)

    string str2 = "                       " ;// 15자리 이상
    cout << str2.capacity() << endl; //15 넘길 시, 그에 맞춤

    //size()는 length()하고 언제나 같은 값을 나타냄. 
    // length()는 단순 문자열 길이. size()는 해당 string객체가 메모리에서 실제 사용하는 크기를 나타냄.
    str = "Hello";
    cout << str.length() << endl;
    cout << str.size() <<endl;
    cout << str.max_size() << endl; // string 내 들어갈 수 있는 최대 사이즈.

    str.reserve(100); // 기본 capacity = 15 용량을 100으로 늘림. 정확히 100이 아니라, 100에 가장 가까운 정해진 크기로 할당.  
    cout << str.capacity() << endl;
    str.reserve(250); 
    cout << str.capacity() << endl;

    str.clear();
    cout << str + "지움" << endl; //지워버림.

    
    string s1 = "hello";
    string s2 = "aa";
    string s3 = "abc";
    string s4 = "ac";
    string s5 = "aa";

    cout <<"-----------------------------------------------------"<<endl;    
    cout << s1.substr(2,3) << endl; // s1.substr(a,b) a자리에서 b자릿수를 가져온다.
    cout << s1.replace(2,3,"hi") << endl; // s1.replace(a,b,"c") a자리에서 b자릿수를 "c"로 전환
    //문자열의 사전순
    cout << s2.compare(s3) << endl; // s2와 s3를 비교해서, s2가 문자열상 앞이 라면은 -1
    cout << s2.compare(s5) << endl; // s2와 s3를 비교해서, 같다면은 0
    cout << s4.compare(s2) << endl; // s4와 s2를 비교해서, s4가 문자열상 뒤 라면은 -1
    

    return 0;
}