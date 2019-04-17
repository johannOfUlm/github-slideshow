#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

template<typename T>
int signum(T a){
    
    if (a < 0){
        return -1;
    } else if (a == 0){
        return 0;
    }else {
        return 1;
    };
}

template<class T>
string getStr(T val){
    
    stringstream stream;
    stream << val;
    return stream.str();
}



int main() {
	
	int valuei;
	double valued;

    cout << "Enter values (int, double): ";
    cin >> valuei;
    cin >> valued;
	
	cout << signum(valuei) << " ";
	cout << signum(valued) << " ";
	cout << getStr(valuei) << " ";
	cout << getStr(valued) << " ";
	
	return 0;
}