#include <iostream>
#include "Student.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Student std;
	std.display();
	int m=std.getrollNo();
	cout<<"\nRollno"<<m;
	cout<<"Enter the roll no to set::";
	int num1;
	cin>>num1;
    std.setrollNo(num1);
    std.display();
	return 0;
}
