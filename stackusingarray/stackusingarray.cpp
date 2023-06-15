#include <iostream>
#include <string>

using namespace std;

class Program {
private:
	string stack_array[5];
	int top;

public :
	program() {
		top = -1;
	}

	string push (string element) {
		if (top == 4) {
			cout << "Stack Full" << end;
			return "";
		}

		top++;
		stack_array[top] = element;

		cout << endl;
	}
};
