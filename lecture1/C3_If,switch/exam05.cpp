//중첩if문 실습
//학점 처리 : A+, A-, B+, B- ...  표식

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    
    int score = 0;
    string grade = "";

    cout << "당신의 과목 점수를 입력하세요 : ";
    cin >> score;

    if (cin.fail()) { // fail()은 cin 객체의 메소드로, 선언한 타입이 미일치 시, true를 리턴한다.
    cout << "입력한 값 0~100 사이 값이 아닙니다." << endl;
    cout << "프로그램을 종료합니다." << endl;
    return 0;
    }
    //중첩 if문 사용하여, 학점을 선정
    if (score >= 90 && score <= 100) { //외부조건문, 큰조건문
        //중첩 if문(무제한적) // 웬만해선 2개 정도만 씀.
        if (score >= 95) { //내부조건문, 작은조건문
            grade = "A+";
        }
        else {
            grade = "A-";
        }
    }
    else if (score >= 80 && score < 90) { //외부조건문, 큰조건문
        //중첩 if문(무제한적) // 웬만해선 2개 정도만 씀.
        if (score >= 85) { //내부조건문, 작은조건문
            grade = "B+";
        }
        else {
            grade = "B-";
        }
    }
    else if (score >= 70 && score < 80) { //외부조건문, 큰조건문
        //중첩 if문(무제한적) // 웬만해선 2개 정도만 씀.
        if (score >= 75) { //내부조건문, 작은조건문
            grade = "C+";
        }
        else {
            grade = "C-";
        }
    }
    else if (score >= 60 && score <= 70) { //외부조건문, 큰조건문
        //중첩 if문(무제한적) // 웬만해선 2개 정도만 씀.
        if (score >= 65) { //내부조건문, 작은조건문
            grade = "D+";
        }
        else {
            grade = "D-";
        }
    }
    else {
        grade = "F";
    }
    
    cout << "입력한 점수는 " << score << "입니다." << endl;
    cout << "점수의 학점 등급 : " << grade << "입니다." << endl;


    return 0;
}
