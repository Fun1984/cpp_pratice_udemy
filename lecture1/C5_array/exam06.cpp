//2���� �迭 �ǽ�
//ȯ�ڼ� 3���� ���� 5�� ���� üũ �� ���������� ���������� Ȯ���ϴ� ���α׷� �����

#include <iostream>
#define ROW 3
#define COL 5
using namespace std;

int main(void) {

	int cnt = 0, sno = 201012101, total = 0;
	double avg = 0.0;
	//2���� �迭�� ���������� �ʱ�ȭ �� ���̴�.
	int bd[ROW][COL] = {
						{135,150,148,160,153},
						{115,120,123,121,112},
						{132,129,128,133,130}
					   };
	cout << ">> ������ ���� ���� : ����� ���� 140 �ʰ� " << endl;
	//�̱� ������ ���α׷� �ۼ�(����帮�� �ʴ� ���)
	/*for (cnt = 0; cnt < ROW; cnt++) {
		//�Ѹ�� ������ �� ����
		total = bd[cnt][0] + bd[cnt][1] + bd[cnt][2] + bd[cnt][3] + bd[cnt][4];
		avg = (double)total / COL;	//���� �ڷ��� ��ȯ
		
		cout << endl;
		cout << "��ȯ�� " << cnt + 1 << "�� ����� ��� ���� �� ����" << endl;
		cout << "ȯ�� ��ȣ : " << sno++ << endl;   //ȯ�ڹ�ȣ ���
		cout << fixed;
		cout.precision(2);	//�Ҽ��� �ڸ� 2��
		cout << "��� ���� : " << avg << endl;
		
		//������ �����ϴ� �ڵ�
		if (avg > 140.0) {
			cout << "���� : �������Դϴ�.�ǰ��� �Ű澲����." << endl;
		}
		else {
			cout << "���� : �����Դϴ�." << endl;
		}		
	}*/

	//���� ������ ���α׷� �ۼ�(C++ �迭 ������ �̿��� ��Ÿ��)
	for (int(&cnt2)[COL] : bd) {
		for (int i : cnt2) {
			total += i;
		}
		avg = (double)total / COL;
		cnt = cnt + 1;
        cout << "��ȯ�� " << cnt << "�� ����� ��� ���� �� ����" << endl;
		cout << "ȯ�� ��ȣ : " << sno++ << endl;   //ȯ�ڹ�ȣ ���
		cout << fixed;
		cout.precision(2);	//�Ҽ��� �ڸ� 2��
		cout << "��� ���� : " << avg << endl;
			
		//������ �����ϴ� �ڵ�
		if (avg > 140.0) {
			cout << "���� : �������Դϴ�.�ǰ��� �Ű澲����." << endl;
		}
		else {
				cout << "���� : �����Դϴ�." << endl;
		}		
		total = 0;  //total ������ �ٽ� 0���� �����Ѵ�. �� ������ �ٷ� ��� �����ǰ� �ֱ� �����̴�.

	}
	return 0;
}