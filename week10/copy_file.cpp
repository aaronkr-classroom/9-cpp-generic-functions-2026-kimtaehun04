//copy_file.cpp

#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream in("input.txt"); //지금 만들어야 하다
	ofstream out("output.txt");// 지금 없다

	string s;

	while (getline(in, s)) 
		out << s << endl;
	
	return 0;
}
