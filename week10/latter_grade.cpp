//letter_grade.cpp
#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

string letter_grade(double score)
{	//각 범위를 구분하는 점수
	static const double numbers[] = {97, 94, 90, 87, 84, 80, 77, 74, 70 ,60 ,0};

	//문자 등급의 명칭
	static const char* const letters[] = { "A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D", "F" };

	//배열의 크기와 요소 하나의 크기를 사용하여
	//각 범위를 구분하는 점수 개수를 구함.
	static const size_t n = sizeof(numbers) / sizeof(*numbers);
	
	//주어진 최종 점숭에 해당하는 문자 등급을 찾아서 반환
	for (size_t i = 0; i < n; ++i) {
				if (score >= numbers[i])
					return letters[i];
	}
	return"?\ ?\ ?"; //주어진 점수가 0보다 작거나 100보다 큰 경우에는 "???" 반환
}
int main(void)
{
	int g;
	cout << "점수를 입력하시오: ";
	cin >> g;
	string ltr = letter_grade(g);

	cout << "당신의 학점은 " << ltr << "입니다." << endl;

	return 0;
}	
