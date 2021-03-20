#include <iostream>
using namespace std;

template<typename T> class ClassGenericDemo {
private:
	T data;

public:
	ClassGenericDemo() {
		this->data = NULL;
	}

	ClassGenericDemo(T data) {
		this->data = data;
	}

	T getData() {
		return this->data;
	}

	void setData(T data) {
		this->data = data;
	}
	 

};




