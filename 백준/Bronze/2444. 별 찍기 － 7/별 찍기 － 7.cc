#include <iostream>

using namespace std;

int main() {
	
	int N;
	cin >> N;

	for (int i = 1; i < 2 * N; i += 2) {
		for (int j = 1; j < (2 * N - i); j += 2) {
			cout << " ";
		}

		for (int j = 0; j < i; j++) {
			cout << "*";
		}

		cout << endl;
	}

	for (int i = 2 * N - 3; i > 0; i -= 2) {
		for (int j = 1; j < (2 * N - i); j += 2) {
			cout << " ";
		}

		for (int j = 0; j < i; j++) {
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}