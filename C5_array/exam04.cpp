// 배열에 대한 실습 - 4
// 배열과 for문 이용하여, 사용자로부터 3개 과목 점수 입력 받고
// 총점과 평균 구하는 프로그램 작성해보기

#include <iostream>
#define LENGTH 3 // 기호 상수

using namespace std;

int main(void) {
    int score[LENGTH] = {0}; //정수형 배열과 초기화
    int count = 0, sum = 0;
    double avg = 0.0;

    //사용자로부터 3개 과목 점수 반복해서 입력받는 코드
    /*for(count = 0; count < LENGTH; count++) {
        cout << count + 1<< "과목 : ";
        cin >> score[count];
    }*/
    for (int& i : score) {
        cout << count + 1 << "과목 : ";
        cin >>score[count++];
    }
    
    for (int i : score) {
        cout << i << " ";
    }
    cout << endl;

    //입력된 3개 과목 총점 구하는 코드
    for (int i : score) {
        sum += i;
    }
    

    cout << "총점 : " << sum << endl;
    //평균을 구하는 코드
    avg = (double)sum / LENGTH;
    cout << fixed; // 소수점을 고정시키겠다.이 아래로는 precision설정 고정 
    cout.precision(3); // 소수점 자리 설정. 
    cout << "평균 : " << avg << endl;
    
    cout.unsetf(ios::fixed); //위에서 설정한 소수점 부분을 해제
    // cout << fixed;
    cout.precision(10); // 소수점 아래 부분 출력 범위만 설정하는 게 아닌, 실수의 정수부와 소수부를 합친 전체 출력 부분을 설정하는 함수. 
    // fixed를 쓰는 것은, 소수점만 자릿수 설정함.
    cout << 5/3.0 << endl;
    cout << 5 << endl;
    

    //참조자를 통한 3과목 입력코드
    
    return 0;
}