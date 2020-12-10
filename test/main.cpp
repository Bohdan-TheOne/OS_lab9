#include "proj.h"

using namespace std;

int main(int argc, char** argv) {
	bool stDynCh;
	int operation;
	int number;
	if (argc > 1) {
		stDynCh = bool(argv[1]);
		operation = atoi(argv[2]);
		number = atoi(argv[3]);
	} else {
		cin >> stDynCh;
		cin >> operation;
		cin >> number;
	}

	if (!stDynCh) {
		cout << "This is static connection : " << endl;
		if (!operation) {
			static_show_out(number);
		} else {
			static_show_sort(number);
		}
	} else {
		cout << "This is dynamic connection : " << endl;
		if (!operation) {
			dynamic_show_out(number);
		}
		else {
			dynamic_show_sort(number);
		}
	}

	return 0;
}
