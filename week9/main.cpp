//main.cpp
#include <iostream>
#include <iterator>
#include <string>
#include "my_algos_T.h"

using namespace std;

int main()
{
	string s;
	while (getline(cin, s)) 
		//문자열을 단어로 나누기
		split(s, ostream_iterator<string>(cout, "\n"));
	
	return 0;
}
