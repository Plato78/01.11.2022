#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
//Массив-совокупность однотипных данных расположенных в памяти последовательно и доступных по одному имени(различаются по номерам)
	//1. номера начинаються с 0
	//	2. все элементы одного типа (любого)
	//	3. все находяться в памяти рядом , одним "куском".
	/*int mas[10];
	будет от 0 до 9*/
	/*mas[0] = 45;
	cin >> mas[1];*/
	//for (int i = 0; i < 10; i++) {
	//	cin >> mas[i];
	//}
	//const int size = 5;
	//int mas[5];
	//for (int i = 0; i < 5; i++) {
	//	cin >> mas[i];
	//}
	//for (int i = 0; i < 5; i++){
	//	cout << mas[i] << ' ';
	//}
	/*const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++) {
		cin >>arr[i];
	}
	for (int i = 0; i < size; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) k++;
	}
	cout << ">0" << k << endl;*/
	//1.
	//const int size = 10;
	//int arr[size];
	//for (int i = 0; i < size; i++) {
	//	cin >> arr[i];
	//}
	//for (int i = 9; i >= 0; i--) {
	//	cout << arr[i] << ' ';
	//}
	//2.
	//const int size = 8;
	//int sum = 0;
	//int arr[size];
	//for (int i = 0; i < size; i++) {
	//	cin >> arr[i];
	//}
	//for (int i = 0; i < size; i++) {
	//	cout << arr[i] << ' ';
	//	if (arr[i] % 2 == 0) {
	//		sum += arr[i];
	//	}
	//}
	//cout << sum << endl;
	//3.
	//const int size = 5;
	//int pr = 1;
	//int arr[size];
	//for (int i = 0; i < size; i++) {
	//	cin >> arr[i];
	//	if (i % 2 == 0) {
	//		pr *= arr[i];
	//	}
	//}
	//for (int i = 0; i < size; i++) {
	//	cout << arr[i] << " ";
	//}
	//cout << pr << " ";
	//4.
	const int size = 7;
	int k = 0;
	int arr[size];
	for (int i = 0; i < size; i++) {
		if (arr[i] % 3 != 0 && arr[i] % 5 !=0) {
			k++;
		}
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
     cout << arr[i] << " ";
     }
	cout << k << " ";
}