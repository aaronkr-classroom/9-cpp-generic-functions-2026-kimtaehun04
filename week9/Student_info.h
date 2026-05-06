//Sudent_info.h

#pragma once


#ifndef GUARD_STUDENT_INFO_H
#define GUARD_STUDENT_INFO_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Student_info {
private: //숨기고 싶은 변수
	string name;
	double midterm, final;
	vector<double> homework;
	//세미콜론을 잊지 않도록 주의


public: //외부에서 접근할 수 있도록 허용하는 변수
	//생성자
	Student_info();//빈 객체를 생성		
	Student_info(istream&); //스트림을 읽어 객체를 생성
	// 윗 생성자가 read_hw() 함수와 비슷해

	//#### 멤버 함수 정의 ####
	string getName() const { return name; }
	void setName(const string& n) { name = n; }

	double getMidterm() const { return midterm; }
	double getFinal() const { return final; }
	vector<double>& getHomework() { return homework; }

	bool valid() const { return !homework.empty(); }

	//9.2.1/254p에서 정의한 함수들
	istream& read(istream&);
	double grade() const;

	const vector<double>& getHomework() const { return homework; }
};//세미콜론을 잊지 않도록 주의

//전역 함수 정의
bool compare(const Student_info& x, const Student_info& y)
{
	return x.getName() < y.getName();
}

#endif // GUARD_STUDENT_INFO_H
