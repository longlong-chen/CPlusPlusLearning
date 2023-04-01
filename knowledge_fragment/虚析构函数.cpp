#include<iostream>
using namespace std;

class A {
	public:
		A() {
			cout << "1";
		}
		A(A &a) {
			cout << "2";
		}
//		virtual ~A() {
//			cout << "3";
//		}
		~A() {
			cout << "3";
		}
}; 

class B: public A {
	public:
		B() {
			cout << "4";
		}
		B(B &b) {
			cout << "5";
		}
		~B() {
			cout << "6";
		}
};

int main() {
	A *pa = new B();
	delete pa;
	return 0;
	return 0;
}

/* The result is 1463 */
/* After delete virtual, the result is 143 */

