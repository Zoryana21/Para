#include <iostream>
#include <string>
#include"nlohmann/json.hpp"
#include<vector>
using namespace std;


class Human {
private:
	string name;
	int age;
	float weight;
public:
	void SetName(string name) {
		this->name = name;
	}
	void SetAge(int age) {
		this->age = age;
	}
	void SetWeight(float weight) {
		this->weight = weight;
	}
	string GetName() {
		return name;
	}
	int GetAge() {
		return age;
	}
	float GetWeight() {
		return weight;
	}
	virtual void Print() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Weight: " << weight << endl;
	}
};
class Student :Human {
	vector<int> marks;
	string NameGryp;
public:
	Student() : Student(" ", 0, {}," ") {

	}
	Student(string name, int age, vector<int> marks,string NameGryp) :name(name), age(age), marks(marks),NameGryp(NameGryp) {

	}
	int Average() {
		int sum = 0;
		for (int i = 0; i < marks.size(); i++) {
			sum += marks[i];
			cout << sum << endl;
		}
		return sum / marks.size();
	}
};
/*[21:03] Кальницкий Никита
Human operator +(const Human& other)*/





void main() {

	Human h;
	h.Print();
}