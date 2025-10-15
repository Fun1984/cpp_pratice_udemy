//다차원 배열에 대한 실습 - 1
//배열의 크기를 지정하는 부분 [](대괄호)가 1개인 경우는 1차원 배열이다.
//배열의 크기를 지정하는 부분 [][](대괄호)가 2개인 경우는 2차원 배열이다.
//배열의 크기를 지정하는 부분 [][][](대괄호)가 3개인 경우는 3차원 배열이다.
//.......
//통상적으로 2차원 배열까지는 많이 사용도가 높다.하지만 3차원 이상 배열은 거의 그래픽
//분야에서 많이 사용된다.(입체감)

#include <iostream>
#define ROW 3	//행의 크기를 의미
#define COL 3	//열의 크기를 의미

using namespace std;

int main(void) {

	int i = 0, j = 0;
//	//9개의 방을 일괄적으로 0으로 초기화를 함(1번째 방법)-사용자로부터 입력을 받고자
//	//할 때 이런형태로 초기화를 한다.
	int arr1[ROW][COL] = { 0 };
//	//초기화 2번째 방법(권장드리고 싶은 방법이 아님)-가독성이 너무 안 좋다.
	int arr2[ROW][COL] = { 1,2,3,4,5,6,7,8,9 };
//	//초기화 3번째 방법
	int arr3[ROW][COL] = { {1,2,3},{4,5,6},{7,8,9} };
//	//초기화 4번째 방법(가장 좋은 방법, 권장드리는 방법)-가독성이 매우 좋다.
	int arr4[ROW][COL] = { 
							{1,2,3},
							{4,5,6},
							{7,8,9} 
						 };
//	//2차원 배열을 출력하기 위해서는 반드시 더블루프가 필요하다.
//	//1.C스타일 출력
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
//	//2.외부 C스타일과 범위 기반 C++스타일 혼용해서 출력
	for (i = 0; i < ROW; i++) {
		for (int j : arr4[i]) {
			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl;
    //3. C++ 스타일로 출력
    // int(*arr)[COL] = NULL;
    // 함수 포인터를 이용해 출력하여 C++스타일로 출력 가능
    for(int(&ln)[3] : arr4) {
        for(int &col : ln) {
            cout << col << " ";
        }
        cout << endl;
    }

    //arr4[i][j]는 정수형 상수값을 대입하는 데 문제가 없다. 변수와 동일하니깐
    arr4[1][1] = 100;
    cout << arr4[1][1] << endl;

    //2차원 배열에서 1차원 배열의 값은 주소라서, 정수형 값 대입 불가
    //arr4[1] = 100;
    //cout << arr4[1][1];

    
    cout << arr1 << endl;
    cout << arr1[0] << endl;
    cout << arr1[1] << endl;
    cout << arr1[2] << endl;
    cout << arr1[2][0] << endl; // 행렬-값이 나옴
    cout << &arr1[2][0] << endl; // 행렬-주소가 나옴
	
    //2차원 배열의 실제 크기 출력해봄
    cout << sizeof(arr1) << endl;
    cout << sizeof(arr1[0]) << endl;
    cout << sizeof(arr1[1]) << endl;
    cout << sizeof(arr1[2]) << endl;
    cout << sizeof(arr1[2][0]) << endl; // 행렬-값이 나옴
    cout << sizeof(arr1[2][0]) << endl; // 행렬-주소가 나옴
    return 0;
}