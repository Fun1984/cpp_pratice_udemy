// 종합 실습 예제 - 2
// 다음 내용에 맞는 프로그램 작성
// 변수 3개를 선언 및 초기화 : int 형 변수 2개, string 변수 1개 선어
// 키보드로 점수 입력
// 입력한 점수 유효범위(0~100) 안에 없는 값 들어오면 예외 처리.
// 입력 점수 switch문 사용하여 등급 출력

#include <iostream>
#include <string>

using namespace std;

int main(void) {

    int Score = 0;
    int Score_detail = 0;
    string Grade = " ";

    cout << "점수 입력 : ";
    cin >> Score;
    
    if (cin.fail() || Score > 100 || Score < 0 ) {
        cout << "0~100 이외의 값을 입력하였습니다." <<endl;
        cout << "프로그램을 종료합니다." << endl;
        return 0;
    }

    cout << "입력한 점수 : " << Score << endl;

    Score_detail = Score%10;
    Score = Score/10;

    

    switch(Score) {
        case 10 :
            Grade = "A+";
            break;
        case 9 :
            if (Score_detail>=5) {
                Grade = "A+";
            }
            else {
                Grade = "A0";
            }
            break;
        case 8 :
            if (Score_detail>=5) {
                Grade = "B+";
            }
            else {
                Grade = "B0";
            }
            break;
        case 7 :
            if (Score_detail>=5) {
                Grade = "C+";
            }
            else {
                Grade = "C0";
            }
            break;
        case 6 :
            if (Score_detail>=5) {
                Grade = "D+";
            }
            else {
                Grade = "D0";
            }
            break;
        default : 
            Grade = "F";
    }

    cout << "점수 등급 : "<< Grade << " 학점" << endl;


    return 0;
}
