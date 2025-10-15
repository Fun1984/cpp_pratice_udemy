//1차원 배열 종합실습 - 2
// 정수형 배열 100개 방 가지는 배열 선언하고 초기화
// 정수형 100개 배열 내, 2의 배수 출력
// 2의 배수 출력할 것인지 입력받고 그 입력받은 수 까지 루프
// 출력 


#include <iostream>
#define LENGTH 100

using namespace std;

int main(void) {
    /*
    int arr[LENGTH] = {0};
    int input = 0, cnt = 0;
    
    for (int& i : arr) {
        i = ++cnt;
    }
    cout << "배열 arr[" << LENGTH << "]개의 방이 0으로 초기화가 다 이루어졌습니다! " << endl;
    cout << "어디까지 2의 배수를 출력할까요? : " ;
    cin >>  input;

    if (input > LENGTH ) { 
        cout << LENGTH << "를 초과한 수는 입력할 수 없습니다." << endl;
        return 0;
    }

    for (int i : arr) {
        if (i%2 == 0 && i <= input ) {
            cout << i << " ";
        }
        else {
            continue;
        }
    }
    */
    
    int arr[LENGTH] = {0};
    int num = 0, cnt=0;

    cout << "배열 arr[" << LENGTH << "]개의 방이 0으로 초기화가 다 이루어졌습니다!" << endl;

    //100개의 배열 방을 0~99까지로 각 방 값을 저장하는 코드
    for (int& i : arr) {
        arr[cnt] = cnt++;
    }
    cout << "어디까지 2의 배수를 출력할까요? : ";
    cin >> num;

    //2의 배수를 구하는 코드
    cnt = 0;
    for (int i  = 0; i <= num; i++) {
        if (arr[i] == 0) { //0는 2의 배수가 아니다.
            continue;
        }
        if(arr[i]%2 == 0) { //짝수이면서 2의 배수이다.
            cout.precision(2);
            cout << arr[i] << " ";
        }
        else {
            continue;
        }

    }


    return 0;
}