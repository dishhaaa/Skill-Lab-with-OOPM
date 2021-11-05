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
        friend int addten(time);
        
};

// friend function definition
int addten(time t) {

    //accessing private members from the friend function
    t.sec += 10;
    return t.sec;
}

int main() {
    time t;
    cout << "time: "<<addten(t);

    return 0;
}
