//sim_ptr.cpp
#include <iostream>

using namespace std;

int main(void)

{
	int x = 5;
	int y = 10;

	//p는 x를 가리킴
	int* p = &x;
	int* q = &y;
	cout << "x = " << x << ", y = " << y << endl;
	cout << "x의 주소 = " << p << ", y의 주소 = " << q << endl;

	// p를 이용해 x값을 변경
	*p = 6;
	*p = *p * 2;
	cout << "x = " << x << ", y = " << y << endl;
	cout << "x의 주소 = " << p << ", y의 주소 = " << q << endl;

	int a=1, b=2, c=3, d=4, e=5, f=6, g=7;
	int* h = &a, *i = &b, *j = &c, *k = &d, *l = &e, *m = &f, *n = &g;

	cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d
		<< ", e = " << e << ", f = " << f << ", g = " << g << endl;

	cout << endl << "변수의 주소:"
		<< "h = " << h << ", i = " << i << ", j = " << j << ", k = " << k
		<< ", l = " << l << ", m = " << m << ", n = " << n << endl;
	
	return 0;
}
