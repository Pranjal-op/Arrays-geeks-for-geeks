#include<iostream>

using namespace std;

int64_t search_max(int64_t* a, size_t size);

int64_t search_max(int64_t* a, size_t size) {

	int64_t b{ a[0] }, result{ 0 }, c{ 0 };
	for (size_t i = 0; i < size; i++) {

		c = a[i];
		if (b > c || b == c) {
			result = b;
		}
		else {
			b = c;
			result = b;
		}
	}
	size_t i{ 0 };
	for (i = 0; i < size; i++) {
		if (result == a[i]) {
			break;
		}
	}
	cout << "maximum element is at index of  " << i << endl;
	return result;
}

int64_t search_min(int64_t* a, size_t size);

int64_t search_min(int64_t* a, size_t size) {

	int64_t b{ a[0] }, result{ 0 }, c{ 0 };
	for (size_t i = 0; i < size; i++) {

		c = a[i];
		if (b < c || b == c) {
			result = b;
		}
		else {
			b = c;
			result = b;
		}
	}
	size_t i{ 0 };
	for (i = 0; i < size; i++) {
		if (result == a[i]) {
			cout << "Minimum element is at index of  " << i << endl;
			break;
		}
	}


	return result;
}




int main() {
	cout << "enter the no of array you want to execute no of array should be less than 101 " << endl;
	int number_of_array{ 0 };
	cin >> number_of_array;
	if (number_of_array >= 100) {
		cout << "enter the number of array less than 101" << endl;
		return 0;
	}

	for (int i = 0; i < number_of_array; i++) {

		cout << "enter the no of element in array no of element in array should be less than 1001" << endl;
		size_t number_of_element_user{ 0 };
		cin >> number_of_element_user;
		if (number_of_element_user >= 1000) {
			cout << "number of element in array should be less than 1001" << endl;
			return 0;
		}

		int64_t* a1 = new int64_t[number_of_element_user];
		for (int i = 0; i < number_of_element_user; i++) {
			cout << "enter the\t" << i << "\telement of array" << endl;
			cin >> *(a1 + i);
		};
		int64_t result_max{ 0 }, result_min{ 0 };
		result_max = search_max(a1, number_of_element_user);
		result_min = search_min(a1, number_of_element_user);
		cout << "maximum in array is\t" << result_max << endl;
		cout << "minimum in array is\t" << result_min << endl;

	}
}




