#include <iostream>
#include <string>
using namespace std;

class Human {
private:

	string name;
	int age;

public:

	string GetName() {
		return name;
	}
	int GetAge() {
		return age;
	}

	void SetName(string newName) {
		name = newName;
	}
	void SetAge(int newAge) {
		age = newAge;
	}

	void Print() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};



void main() {

	Human h;
	h.Print();
}