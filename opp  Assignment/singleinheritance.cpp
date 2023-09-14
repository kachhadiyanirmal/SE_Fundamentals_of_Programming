#include<iostream>
using namespace std;
class criceter
{
		int totalrun,averagerun;
		public:
		void getinfo()
		{
			cout<<"enter the total run";
			cin>>totalrun;
			fflush(stdin);
			cout<<"enter the average run";
			cin>>averagerun;
			
		}
		void displayp(){
			cout<<endl<<totalrun<<","<<averagerun<<",";
		}
};
class batsman: private criceter
{
	int performance;
	public:
		void setinfo(){
		     getinfo();
		     cout<<"enter the performance";
		     fflush(stdin);
			 cin>>performance;
            }
            void display(){
            	displayp();
            	cout<<performance<<","<<endl;
			}
};
int main()
{
	batsman c1;
	c1.setinfo();
	c1.display();
	return 0;
}
