// 사용자 정의 함수에 대한 실습 - 1
// 함수는 선언부, 구현부로 나뉜다.
// 선언부 > 구현부 : 선언부에 모든 인아웃, 필요값이 다 적힘. 
// 선언부 : 반환타입(리턴타입), 함수명, 매개변수(인자값,parameter,arguments)
// 매개변수는 없을 수 있고, N개 까지 존재할 수도 있다. 
// 반환타입은 void가 아닌 이상, 반드시 return문이 있어야 함. 
// return문도 반드시 함수 선언부 반환타입과 일치해야 된다. 
// 매개변수의 개수, 타입(자료형)을 보고 그 갯수와 타입에 맞게끔 호출해야 한다. 

//add() 사용자 정의 함수를 만들어서, 직접 프로그램 만들기. 

#include <iostream>
#include <cstdlib>

using namespace std;


int add(int, int); // 함수 선언부를 적어줌으로써, 컴파일러에게 사용함을 알려줄 수 있음. 
// int add(int x, int y); //<- 요렇게 적어도 된다. 

int main(void) { //2019버전까지는 선언부 생략이 가능했음
    
    int x = 10, y = 50, hap = 0;
    cout << "매개변수 2개의 덧셈 연산" << endl;
    cout << "[main()] 영역임" << endl;
    cout << "전달> " << x << ", " << y << "를 add()에 전달" << endl << endl;
    
    hap = add(x, y); // 2022 버전 들어오면서, 위에 적지 않으면 에러가 남.
    cout << "[main()] 영역으로 돌아옴" << endl;
    cout << "함수 호출 후 hap의 값 : " << hap << endl << endl;

    return 0;
}


//사용자 정의 함수 구현
int add(int x, int y) {
    int result = 0; //지역변수(함수 내 존재 변수), 실행 후 사라짐
    cout << "[add() 함수 영역]" << endl;
    cout << "수행 > 덧셈 연산 결과를 main()함수에 반환" << endl;
    result = x + y;

    return result; //리턴 타입이 int이기에 result 리턴값 주고 있음. 
}

//왜 이런 구조가 되는 지는, 자료구조의 문제임.
//보통 함수를 실행시키면, 스택구조로(LIFO
// main이 가장 먼저 쌓이고, 그 다음에 add가 들어오게 됨. 
// 그 다음에 add가 사라짐. main이 처리됨. 
// 그렇다보니 순서상 add를 말 안해주면은, main이 가장 먼저 실행된 상태에서 add를 몰라서 에러가 터지는 것. 
