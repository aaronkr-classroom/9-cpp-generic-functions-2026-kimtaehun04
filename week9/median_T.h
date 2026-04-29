#pragma once


#ifndef GUARD_MEDIAN_T_H
#define GUARD_MEDIAN_T_H

#include <algorithm>
#include <vector>
#include <stdexcept>

using namespace std;
// vector<double>의 중앙값을 구함 ~~
//함수를 호출하면 인수로 제공된 백터를 통째로 복사
template <class T>
T median(vector<T> vec)
{
    //과제 점수릐 입력 유무를 확인
	typedef typename vector<T>::size_type vec_sz;
	vec_sz size = vec.size();
	if (size == 0)
		throw domain_error("median of an empty vector");
	//정수를 정렬하기
	sort(vec.begin(), vec.end()); // <algorithm> 필요
	//과제 점수의 중앙값을 구함
	vec_sz mid = size / 2;

	return size % 2 == 0 ? 
		(vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}


#endif // GUARD_MEDIAN_T_H
