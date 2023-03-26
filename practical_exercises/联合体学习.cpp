#include<iostream>
using namespace std;

union myun {
	struct {int x; int y; int z;}u;
	int k;	
}a; 

int main() {
	a.u.x = 4;
	a.u.y = 5;
	a.u.z = 6;
	a.k = 5;
	printf("%d %d %d %d\n", a.u.x, a.u.y, a.u.z, a.k);
	printf("%d\n", sizeof(a));
	system("pause");
	return 0;
}

/**
* 4 5 6 5
* 12
* k 和 {x, y, z} 公用12B空间，当a.k = 5 会覆盖a.u.x = 4所占的空间
* a.k 和 a.u.x指向的是同一地址空间
*/
