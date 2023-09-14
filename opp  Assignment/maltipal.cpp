#include<iostream>
using namespace std;

class Person{
	char name[10];  
	int age;
	public:
		void std1(){
			cout<<"enter the name:";
			cin.getline(name,10);
			 	cout<<"enter age";
			cin>>age;
		}
		void dis1(){
			cout<<name<<","<<age<<endl;
		}
		
};


class Student {
float per ;
	public:
		void std(){
			
			cout<<"enter the Per:";
		cin>>per;
			 
		}
		void dis(){
			cout<<per<<","<<endl;
		}
	
};

class Teacher : private Student , Person {
int sal ;
	public:
		void std2(){
			std1();
			std();
			cout<<"enter the salary:";
		cin>>sal;			 
		}
		void dis2(){
			dis1();
			dis();
			cout<<sal<<","<<endl;
		}
	
};

int main(){
	Teacher s;
	s.std2();
	s.dis2();
	return 0;
}
