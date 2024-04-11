#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

	srand(time(0));

	int randomDisplay[10];

	for (int i = 0; i < 10; i++) {
		randomDisplay[i] = rand() % 9000 + 1000;
	}
	cout << "The random integers: ";
	for (int i = 0; i < 10; i++) {
		cout << randomDisplay[i] << " ";
	} cout << endl;

	cout << "Even indices: ";
	for (int i = 0; i < 10; i += 2) {
		cout << randomDisplay[i] << " ";
	} cout << endl;

	cout << "Even values: ";
	for (int i = 0; i < 10; i++) {
		if (randomDisplay[i] % 2 == 0) {
			cout << randomDisplay[i] << " ";
		}
	}cout << endl;

	cout << "Reversed order: ";
	for (int i = 0; i < 10; i++) {
		cout << randomDisplay[10 - 1 - i] << " ";
	}cout << endl;

	cout << "First and last: " << randomDisplay[0] << " " << randomDisplay[10 - 1];

}

	
