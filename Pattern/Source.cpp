#include<iostream>

using namespace std;
int main() {

	int a{ 0 };
	cout << "enter desired number" << endl;
	cin >> a;
	int x{ a }, y{ 1 }, z{ a };
	for (int i{ 0 }; i < a; i++) {
		for (int j{ a }; j > 0; j--) {

			while (y <= x)
			{
				if (y && x && z > 0) {// using this condition to avoid negative input
					cout << z;
					y++; // increasing counter variable
				}
				else {
					break;// if number is negative exiting loop
				};
			};
			y = 1; // reseting counter variable
			z = z - 1;// updating printing variable
		};
		x = x - 1;
		z = a;// resseting printing variable
		cout << endl;// creating new line

	};
}