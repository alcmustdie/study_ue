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

	ptrMe->hp = 80;

	cout << ptrMe->hp;

	return 0;
}
*/
/*
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
*/

int main() {
	bool isHungry = true;

	if (isHungry) {
		cout << "Eat..." << endl;
	}
	cout << "Sit.";
}