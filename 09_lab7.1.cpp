// C++ program to demonstrate the working of friend function

#include <iostream>
using namespace std;

class time {
    private:
        int sec;
               
    public:
        time() {
			sec=0;
		}
	
		// friend function
        friend int addFive(time);
        
};

// friend function definition
int addFive(time t) {

    //accessing private members from the friend function
    t.sec += 30;
    return t.sec;
}

int main() {
    time t;
    cout << "time: "<<addFive(t);

    return 0;
}
