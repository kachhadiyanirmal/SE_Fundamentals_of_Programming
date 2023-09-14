#include<iostream>
using namespace std;

void circle(int r)
{
	cout<<"circle area ="<<(r*r*3.14)<<endl;
}
void rectangle(int h,int w)
{
	cout<<"rectangle area ="<<(h*w)<<endl;
}
void Triangle(int a,int b,int c)
{
	cout<<"triangle area ="<<(a+b+c/2)<<endl;
	
}
int main()
{
	circle(55);
	rectangle(55,77);
	Triangle(12,15,18);
}
