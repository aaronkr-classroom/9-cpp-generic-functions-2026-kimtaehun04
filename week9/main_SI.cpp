// main_SI.cpp
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <ios>
#include <stdexcept>
#include <string>
#include <vector>
#include "Student_info.h"
#include "median.h"//나중에 공유한 파일 사용

using namespace std;

int main()
{
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;
	//학생들의 이름과 점수를 읽어서 students 벡터에 저장
	while (record.read(cin)) {// Student_info의 멤버 함수 read()를 사용하여 학생들의 이름과 점수를 읽어서 students 벡터에 저장
		maxlen = max(maxlen, record.getName().size());
		students.push_back(record);
	}
	//학생들을 이름순으로 정렬
	sort(students.begin(), students.end(), compare);
	//학생들의 이름과 점수를 출력
	for (vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
		cout << students[i].getName() << string(maxlen + 1 - students[i].getName().size(), ' ');
		try {
			double final_grade = students[i].grade();
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade << setprecision(prec);
		}
		catch (domain_error e) {
			cout << e.what() << endl; //에러 메세지를 출력하고 줄바꿈;
		}
		cout << endl;
	}
	return 0;
}

//필요한 파일:
//-Student_info.cpp
//-median.cpp
//-median.h
//-grade.h
//-grade.cpp
