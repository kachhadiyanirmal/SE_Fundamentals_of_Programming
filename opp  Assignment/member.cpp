#include<iostream>
using namespace std;
class DataMember
{
	int ACnumber;
	char ACtype[100];
	public:
		void banck()
		{
			cout<<"enter the account type";
			cin.getline(ACtype,100);
		
		
			cout<<"enter the account number";
			cin>>ACnumber;
			
		}
		void display()
		{
			cout<<ACnumber<<","<<ACtype;
		}
};
void member()
{
	int Balamount;
	char Depname[100];
	Balamount=25000;
	cout<<"enter the name";
	cin.getline(Depname,100);
	if(Balamount==0){
	 	
	 cout<<"balance amount not velid";	
	}
	cout<<Depname<<","<<Balamount;
};
int main()
{

    member();	
	return 0;
}
