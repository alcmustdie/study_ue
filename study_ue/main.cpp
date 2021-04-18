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

int main() {
	enum Item {
		Coin, Key, Sanddollar
	};
	Item itemInHand = Coin;

	if (itemInHand == Key) {
		cout << "Lion key" << endl;
	}
	else if (itemInHand == Coin) {
		cout << "Rusty coin" << endl;
	}
	else if (itemInHand == Sanddollar) {
		cout << "Sea sanddollar";
	}

	return 0;
}
int main() {
	int x, y;

	cout << "Enter X, Y" << endl;
	cin >> x >> y;

	if (x == y) {
		cout << "X = Y" << endl;
	}
	else {
		cout << "X != Y" << endl;
	}

	if (x > y) {
		cout << "X > Y" << endl;
	}
	else if (x < y) {
		cout << "X < Y" << endl;
	}
	else {
		cout << "X equals Y";
	}

	return 0;
}

enum Food {
	Fish,
	Bread,
	Apple,
	Orange
};
int main() {
	Food food = Fish;

	switch (food) {
	case Fish:
		cout << "Thats Fish!!!" << endl;
		break;
	case Bread:
		cout << "Wow, what a nice Bread!!!" << endl;
		break;
	case Apple:
		cout << "Red apple." << endl;
		break;
	case Orange:
		cout << "Orange orange." << endl;
		break;
	default:
		cout << "Bad food." << endl;
		break;
	}

	cout << Fish;

	return 0;
}
enum Vegetables { Potato = 1 << 0, Cabbage = 1 << 1, Broccoli = 1 << 2, Zucchini = 1 << 3 };

int main() {
	Vegetables veg = Potato;

	switch (veg) {
	case Zucchini:
	case Broccoli:
		cout << "Green!" << endl;
		break;
	default:
		cout << "No green!" << endl;
		break;
	}
	cout << (Potato | Cabbage |Broccoli);
}
enum Mount {
	Horse = 1,
	Mare,
	Mule,
	Sheep,
	Chocobo
};

int main() {
	setlocale(LC_ALL, "Russian");
	int mount;

	cout << "Choose your mount: \n";
	cout << Horse << " Horse" << endl;
	cout << Mare << " Mare" << endl;
	cout << Mule << " Mule" << endl;
	cout << Sheep << " Sheep" << endl;
	cout << Chocobo << " Chocobo" << endl;

	cin >> mount;

	switch (mount)
	{
	case Horse:
		cout << "Your mount is Horse";
		break;
	case Mare:
		cout << "Your mount is Mare";
		break;
	case Mule:
		cout << "Your mount is Mule";
		break;
	case Sheep:
		cout << "Your mount is Sheep";
		break;
	case Chocobo:
		cout << "Your mount is Chocobo";
		break;
	default:
		cout << "Cann't be mounted";
		break;
	}

	return 0;
}
int main() {
	int x = 1;

	while (x <= 16)
	{
		cout << x << "\t";
		cout << x * x << endl;

		x+=1;
	}

	return 0;
}
int main() {
	int sum = 0;

	for (int x = 1; x <= 10; x++) {
		sum += x;
		cout << sum << '\n';
	}

	return 0;
}
*/

void printRoad(int numSegments) {
	for (int i = 0; i < numSegments; i++) {
		cout << "*   *" << endl;
		cout << "* | *" << endl;
		cout << "* | *" << endl;
		cout << "*   *" << endl;
	}
}

int main() {
	//double rootOf5 = sqrt(5);
	//cout << rootOf5;
	printRoad(5);
}
