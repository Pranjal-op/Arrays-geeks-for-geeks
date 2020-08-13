#include<iostream>

using namespace std;
int main() {

	int n{ 0 };
	cout << "enter desired number" << endl;
	cin >> n;
	int x{ n }, y{ 1 }, z{ n };
	for (int i{ 0 }; i < n; i++) {
		for (int j{ n }; j > 0; j--) {

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
		z = n;// resseting printing variable
		cout << endl;// creating new line

	};
}