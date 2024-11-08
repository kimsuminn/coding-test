#include <iostream>

using namespace std;

int main() {
	
	int N;
	cin >> N;

	for (int i = 2 * N - 1; i > 0; i -= 2) {
		for (int j = 0; j < 2 * N - 1 - i; j += 2) {
			cout << " ";
		}

		for (int j = 0; j < i; j++) {
			cout << "*";
		}

		cout << endl;
	}

	for (int i = 3; i < 2 * N; i += 2) {
		for (int j = 0; j < 2 * N - 1 - i; j += 2) {
			cout << " ";
		}

		for (int j = 0; j < i; j++) {
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}