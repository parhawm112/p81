#include <iostream>

using namespace std;

int main() {
	
	int n,num,max=0,min=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>num;
	if(i==0)
	 min=num;
	if(num>max)
	 max=num;
	 if(num<=min)
	  min=num;

	}
	cout<<"Reusult is:"<<endl;
	cout<<"Max:"<<"\t"<<max<<"\t";
	cout<<"Min:"<<"\t"<<min<<"\t";
	cout<<"Average:"<<"\t"<<(double)(max+min)/2<<"\t";
	
	
	
}