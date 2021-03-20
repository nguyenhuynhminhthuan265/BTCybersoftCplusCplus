#include <iostream>
#include "ClassGenericDemo.cpp"
using namespace std;

int main() {
	
	ClassGenericDemo<int> *demo = new ClassGenericDemo<int>();
	demo->setData(1);
	cout << "data: " << demo->getData() << endl;

















    int  x = 20, y;    // khai bao bien binh thuong
    int* ip;          // bien con tro

    ip = &y;
    *ip = x;           // dia chi luu tru cua bien con tro


    // gia tri cua bien x
    cout << "Gia tri cua bien x: ";
    cout << x << endl;

    // DIa chi cua bien x
    cout << "Dia chi cua bien x: ";
    cout << &x << endl;

    // gia tri cua bien y
    cout << "Gia tri cua bien y: ";
    cout << y << endl;

    // Dia chi cua bien y
    cout << "Dia chi cua bien y: ";
    cout << &y << endl;


    // in dia chi luu tru cua bien con tro ip
    cout << "Dia chi luu tru cua bien con tro ip: ";
    cout << ip << endl;

    // gia tri cua dia chi o nho cua con tro
    cout << "Gia tri cua bien *ip: ";
    cout << *ip << endl;

    cout << "Dia chi ip: ";
    cout << &ip << endl;


    int value = 5;
    int* ptr = &value;

    cout << value << endl;
    cout << &value << endl;
    cout << *ptr << endl;
    cout << ptr << endl;

    cout << &ptr << endl;


	system("pause");
	return 0;
}