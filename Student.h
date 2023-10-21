#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include<string>
using namespace std;

class Student
{
	private:
	int rollNo,m1,m2,m3;
	string name;
	public:
		Student();
		Student(int rollNo,string name,int m1,int m2,int m3);
		void display();
		int getrollNo();
		void setrollNo(int m);
		~Student();
	
};

#endif
