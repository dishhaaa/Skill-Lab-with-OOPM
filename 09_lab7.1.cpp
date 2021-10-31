#include<iostream>
using namespace std;

class employee{
	int employeeID;
	float balance;
	
	public:
	employee(){
		employeeID=0;
		balance=0;
	}
	/*void insertDetails(){
		employeeID=25;
		balance=15000;
	}*/
	
	void displayDetails(){
		cout<<"employee ID is ="<<employeeID<<endl<<"Account Balance ="<<balance<<endl; 
	}
	
	friend void insertDetails(employee &obj);
	
};
void insertDetails(employee &obj){
		obj.employeeID=101;
		obj.balance=100000;
}

int main(){
	employee obj;
	obj.displayDetails();
	insertDetails(obj);
	obj.displayDetails();
	return 0;
}
