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
	Human() :Human(" ", 0, 0) {

	}
	Human(string name, int age, float weight) :name(name), age(age), weight(weoght) {

	}
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
	virtual string Serealized()
	{
		h1["Name:"] = this->name;
		h1["Age:"] = this->age;
		h1["Weight:"] = this->weight;

		return h1.dump();
	}
	Human DeSerealized(string serealized)
	{
		Human human1;
		human1.SetName(ob["Name:"].get<string>());
		human1.SetAge(ob["Age:"].get<int>());
		human1.SetWeight(ob["Weight:"].get<float>());

		return human1;
	}
	/*Human operator +(const Human& other) {
		if (this->() == other.())return true;
		else return false;
	}*/
};
class Student :Human {
	vector<int> marks;
	string NameGryp;
public:
	Student() : Student(" ", 0, {}, " ") {

	}
	Student(string name, int age, vector<int> marks, string NameGryp) :name(name), age(age), marks(marks), NameGryp(NameGryp) {

	}
	int Average() {
		int sum = 0;
		for (int i = 0; i < marks.size(); i++) {
			sum += marks[i];
			cout << sum << endl;
		}
		return sum / marks.size();
	}
	virtual string Serealized()
	{
		h1["Name:"] = this->name;
		h1["Age:"] = this->age;
		h1["Weight:"] = this->weight;
		h1["NameGryp:"] = this->NameGryp;

		return h1.dump();
	}
	//bool operator ==(Human& other)
	//{
	//	if (this->() == other.())return true;
	//	else return false;
	//}
};
/*[21:03] Кальницкий Никита
Human operator +(const Human& other)*/


void main() {

	Human h;
	h.Print();

}