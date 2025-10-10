// 내장함수(C++ 컴파일러에서 제공해주는 라이브러리 함수) 실습 - 1
// 난수발생함 rand(), srand()
// 함수란 : 프로그램에서 특정 기능을 수행하도록 따로 정의를 해두는 것을 의미함.
// 함수를 사용하게 되면 얻는 장점 
// 1. 코드 중복을 줄인다.
// 2. 복잡한 문제를 모듈 단위로 분해해서 단순화 
// 3. 함수는 사용자가 삭제하기 전 까지는 재사용이 가능하다. 
// 4. 함수를 사용함으로 유지, 보수가 매우 수월하다. 

// 난수 : 특정한 규칙이 없이 예측할 수 없는 임의의 값을 난수라고 칭한다. 
#include <iostream>
#include <cstdlib> // rand()
#include <ctime> // srand(), time()
#define LENGTH 6

using namespace std;

int main(void) {
    
    int cnt = 0;
    
    cout << "1~45까지 숫자 6개만 출력합니다." <<endl;
    cout << "rand()만 이용합니다." << endl;

    for(cnt = 1; cnt <= LENGTH; cnt++) {
        cout << rand() << "   "; // rand() 함수 범위 : 0~32767인데, 계속 사용하니깐 재실행할 때 늘 같은 값이 남는다.

    }
    cout << endl << endl;

    //범위 조정을 하고 난수를 출력해야함
    cout << "rand()% 45 : ";
    for(cnt = 1; cnt <= LENGTH; cnt++) {
        cout << (rand() % 45) << "   "; // 난수 범위가 : 0 ~ 44까지 값을 출력함 
    }
    cout << endl << endl;

    //시작값과 끝값을 설정하여 난수를 생성
    cout << "1 + rand() % 45 : ";
    for (cnt = 1; cnt <= LENGTH; cnt++) {
        cout << 1 + (rand() % 45) << "  ";  // 난수 범위가 : 1 ~ 45까지의 값을 출력함
    }
    cout << endl << endl;

    //재실행 시, 출력되는 값이 이전 실행값과 동일함을 볼 수 있음. 
    //이는 seed(종자)값에 의한 현상으로, 같은 시드값만을 넣고 있기 때문임. 
    // 이를 다르게 하기 위해서 srand()를 사용함.
    // <ctime>을 사용함. 

    srand(1);
    cout << "1~45까지 숫자 6개만 출력합니다." <<endl;
    cout << "rand()만 이용합니다." << endl;
    for(cnt = 1; cnt <= LENGTH; cnt++) {
        cout << rand() << "   "; 
    }
    cout << endl;
    cout << "rand()% 45 : ";
    for(cnt = 1; cnt <= LENGTH; cnt++) {
        cout << (rand() % 45) << "   "; 
    }
    cout << endl;
    cout << "1 + rand() % 45 : ";
    for (cnt = 1; cnt <= LENGTH; cnt++) {
        cout << 1 + (rand() % 45) << "  ";  
    }
    cout << endl << endl;

    srand(5);
    cout << "1~45까지 숫자 6개만 출력합니다." <<endl;
    cout << "rand()만 이용합니다." << endl;
    for(cnt = 1; cnt <= LENGTH; cnt++) {
        cout << rand() << "   "; 

    }
    cout << endl;
    cout << "rand()% 45 : ";
    for(cnt = 1; cnt <= LENGTH; cnt++) {
        cout << (rand() % 45) << "   "; 
    }
    cout << endl;
    cout << "1 + rand() % 45 : ";
    for (cnt = 1; cnt <= LENGTH; cnt++) {
        cout << 1 + (rand() % 45) << "  ";  
    }
    cout << endl << endl;

    // srand(time(NULL)) 현재 프로그램 실행 시점의 시간이 항상 달라서, 값이 변동된다.
    // time(NULL) : 1970년 1월 1일 0시부터 지금까지 흘러온 시간을 잡아서 난수화. 
    // unsigned : 부호가 없다는 표현.
    srand((unsigned)time(NULL)); 
    cout << time(NULL) << endl << endl;
    cout << "1~45까지 숫자 6개만 출력합니다." <<endl;
    cout << "rand()만 이용합니다." << endl;
    for(cnt = 1; cnt <= LENGTH; cnt++) {
        cout << rand() << "   "; 
    }
    cout << endl;
    cout << "rand()% 45 : ";
    for(cnt = 1; cnt <= LENGTH; cnt++) {
        cout << (rand() % 45) << "   "; 
    }
    cout << endl;
    cout << "1 + rand() % 45 : ";
    for (cnt = 1; cnt <= LENGTH; cnt++) {
        cout << 1 + (rand() % 45) << "  ";  
    }
    cout << endl << endl;
    // rand와 srand는 항상 쌍으로 움직인다. 그래야 난수를 발생시키기 때문임. 
    return 0;
}