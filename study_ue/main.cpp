#include <iostream>
#include <string>

using namespace std;

struct Vector {
	float x, y, z;
};

struct Player {
	string name;
	int hp;
	Vector position;
};

int main() {
	Player me;
	Player *ptrMe;

	me.name = "William";
	me.hp = 100.0f;
	me.position.x = me.position.y = me.position.z = 0;

	return 0;
}