#include <iostream>
using namespace std;

int main() {
	cout << "hello world!" << endl;
	cout << "hihello" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "hi";
	}
	while (true) {
		int i = 0;
		cout << "hello";
		i++;
		if (i == 5) {
			break;
		}
	}
	return 0;
}