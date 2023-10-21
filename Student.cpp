#include "Student.h"

Student::Student()
{
	rollNo=1;
	name="Tejas";
	m1=22;
	m2=33;
	m3=44;
}

Student::~Student()
{
}
Student::Student(int rollNo,string name,int m1,int m2,int m3){
	this->rollNo=rollNo;
	this->name=name;
	this->m1=m1;
	this->m2=m2;
	this->m3=m3;
}
void Student::display(){
	cout<<"name"<<name;
	cout<<"\nrollNo"<<rollNo;
	cout<<"\nm1"<<m1;
	cout<<"\nm2"<<m1;
	cout<<"\nm3"<<m1;
}
int Student::getrollNo(){
	return rollNo;
}
void Student::setrollNo(int num){
	this->rollNo=num;
}
