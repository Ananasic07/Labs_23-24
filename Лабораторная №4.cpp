#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Rus");
	int queue[100]; //�������� ������� queue(�������)
	int frnt = 0, rear =0; //�������� ���������� ������ � �����
	int n; //����� ��������� � �������
	cout << "������� ����� ��������� � �������:" << endl;
	cin >> n;
	//cout << "������� " << n << " �����: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "������� ������� ������� : " ;
		int a;
		cin >> a;
		cout << endl;
		queue[rear++] = a; //���������� ��������� � �������(������)
	}
	cout << "������� �������: " ;
	for (int i = 0; i < n; i++) {
		cout << queue[i] << " ";
	}
	cout << endl;
	for (int j = 0; j < n;j++) {
		cout << "����� �������: " << queue[frnt] << endl;
		frnt++; //�������� �������� (���������� ������� ������ ������� �� 1)
		cout << "������� �������: ";
		for (int i = frnt; i < rear ; i++) {
			cout << queue[i] << " ";
		}
		cout << endl;
	}
	cout << "������� �����!";
}