#include<iostream>
using namespace std;
int main()
{
	//declaring variables
	int n1,n2,temp;
	//taking input from user
	cout << "Enter first number" << endl;
	cin >> n1;
	cout << "Enter second number" <<endl;
	cin >> n2;
	cout <<"First Number="<<n1<<endl<<"Second Number="<<n2<<endl;
	//adding both numbers
	cout << "Addition of " <<n1<<" and "<<n2<<" is "<<n1+n2;
	//swapping both numbers
	cout<<"\nSwapping \n";
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"Swapped numbers n1= "<<n1<<" and n2= "<<n2<<endl;
	//checking n1 is even or not
	cout<<"even or odd \n";
	if(n1%2==0) //use of if-else statement 
		cout<<n1<<" is even \n";
	else
		cout<<n1<<" is odd \n";
	
	return 0;
}

