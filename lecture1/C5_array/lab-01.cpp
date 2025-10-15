//1차원 배열 종합실습 - 1
// 정수형 배열 요소가 3개인 것 선언 후 초기화
// 사용자에게 3개 입력 받고, 배열 저장
// 3개 배열 값중 최댓값 구하기. 

#include <iostream>
#define LENGTH 3 //매크로 상수 선언 및 치환

using namespace std;

int main(void) {
    /*
    int num[3] = {0} ;
    int max = 0, input = 0, count = 0;

    for (int& i : num) {
        cout << ++count << "번째 정수를 입력하시오. : ";
        cin >> i;
    }

    for  (int i : num) {
        if (i >= max) {
            max = i;
        }
    }
    cout << "가장 큰 수는 " << max << "이다." <<endl;
    */
    
    int arr[LENGTH] = {0};
    int max_value = 0;
    int cnt = 0;
    //사용자 입력 코드
    for (int& i : arr) { //참조자 이용 입력법
        cout << cnt+1 << "번째 정수를 입력해주세요. : ";
        cin >> arr[cnt];
        cnt++;
    }
    // cout << endl;
    // cnt = 0;
    // for (int i : arr) {
    //     cout << arr[cnt++] << " ";
    // }
    
    //최댓값 구하는 코드
    if (arr[0] > arr[1]) {
        if(arr[0] > arr[2]) {
            max_value = arr[0];
        }
        else {
            max_value = arr[2];
        }
    }
    else {
        if (arr[1] > arr[2]) {
            max_value = arr[1];
        }
        else {
            max_value = arr[2];
        }
    }

    cout << "가장 큰 수는 " << max_value << "이다." << endl << endl;

    return 0;
}