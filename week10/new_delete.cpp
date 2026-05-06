//new_delete.cpp
#include <iostream>
using namespace std;

int main(void)
{
	//1. 단일 객체 동적 할당(기본 초기화)
	int* p1 = new int; //new 연산자로 정수형 변수 하나를 위한 메모리를 할당
	*p1 = 10; //할당된 메모리에 10을 저장
	cout << "*p1 = " << *p1 << endl; //할당된 메모리에 저장된 값을 출력

	//2.단일 객체 동적 할당(값 초기화)
	int* p2 = new int(20); //new 연산자로 정수형 변수 하나를 위한 메모리를 할당하고 20으로 초기화
	cout << "*p2 = " << *p2 << endl; //할당된 메모리에 저장된 값을 출력

	//3. 배열 동적 할당
	int* arr = new int[3]; //크기 3 배열 생성
	//배열 값 설정
	for (int i = 0; i < 3; i++) {
		arr[i] = i + 1; //배열 요소 초기화
		
	}
	//배열 출력
	cout << "배열 요소: ";
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " "; //배열 요소 출력
	}
	cout << endl;
	
	//4. 메모리 해제(단일 객체)
	delete p1; //new 연산자로 할당된 메모리를 해제
	delete p2; //new 연산자로 할당된 메모리를 해제
	
	//5, 메모리 해제 (배열)
	delete[] arr; //new 연산자로 할당된 배열 메모리를 해제
	return 0;
}
