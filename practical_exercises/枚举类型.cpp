#include<iostream>
using namespace std;

enum weekday {
	s, m, w, thu, f,sl
};

int main() {
	enum weekday wek = s;
	cout << "m = " << m << endl;
	for(int i = wek; i != f; i++) {
		cout << "i = " << i << endl;
		cout << "wek + s = "<< wek + s << endl;
	}
	return 0;
}

/**
* m = 1
* i = 0
* wek + s = 0
* i = 1
* wek + s = 0
* i = 2
* wek + s = 0
* i = 3
* wek + s = 0
*/
