#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Rus");
	int queue[100]; //создание массива queue(очередь)
	int frnt = 0, rear =0; //создание переменных начала и конца
	int n; //число элементов в очереди
	cout << "Введите число элементов в очереди:" << endl;
	cin >> n;
	//cout << "Введите " << n << " чисел: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Введите элемент массива : " ;
		int a;
		cin >> a;
		cout << endl;
		queue[rear++] = a; //добавление элементов в очередь(массив)
	}
	cout << "Текущая очередь: " ;
	for (int i = 0; i < n; i++) {
		cout << queue[i] << " ";
	}
	cout << endl;
	for (int j = 0; j < n;j++) {
		cout << "Удалён элемент: " << queue[frnt] << endl;
		frnt++; //удаление элемента (увеличение индекса начала очереди на 1)
		cout << "Текущая очередь: ";
		for (int i = frnt; i < rear ; i++) {
			cout << queue[i] << " ";
		}
		cout << endl;
	}
	cout << "Очередь пуста!";
}