#include<iostream>
using namespace std;

class Student{  
	int rollnumber;
	public:
		void std1(){
		    cout<<"enter rollnumbe";
			cin>>rollnumber;
		}
		void dis1(){
			cout<<rollnumber<<endl;
		}
		
};


class Test {
float s1,s2 ;
	public:
		void std(){
			
			cout<<"enter the marks:";
		cin>>s1>>s2;
			 
		}
		void dis(){
			cout<<s1<<s2;
		}
	
};

class Result  : private Student , Test { 
	public:
		void std2(){
			std1();
			std();
						 
		}
		void dis2(){
			dis1();
			dis();
			
		}
	
};

int main(){
	Result s;
	s.std2();
	s.dis2();
	return 0;
}
