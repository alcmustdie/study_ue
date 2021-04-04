#include <iostream>
#include <string>

using namespace std;
/*
struct Vector {
	float x, y, z;
};

struct Player {
	string name;
	int hp = 100;
	Vector position;
};

int main() {
	Player me;
	Player *ptrMe;

	ptrMe = &me;


	me.name = "William";
	me.hp = 100.0f;
	me.position.x = me.position.y = me.position.z = 0;

	int x = 22;

	int *px = 0;
	px = &x;

	cout << px;

	return 0;
}
*/

int main() {
	cout << "Enter your name: ";
	string name;
	cin >> name;
	cout << "Enter your age: ";
	int age;
	cin >> age;
	string s = "Hello";
	printf("%s, %s. Your age is: %d\n", s.c_str(), name.c_str(), age);
}