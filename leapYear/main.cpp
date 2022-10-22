#include <iostream>
using namespace std;

int main() {
    cout << "Starting year: ";
    int year1;
    cin >> year1;
    
    cout << "Ending year: ";
    int year2;
    cin >> year2;
    
    cout << "Leap years between " << year1 << " and " << year2 << endl;
    
    for(int i = 0; i < (year2 - year1); i++) {
        
        if((i + year1)%400==0) 
            cout << (year1 + i)  << endl;
        
        else if((i + year1)%4==0 && (i + year1)%100!=0) {
            cout << (year1 + i)  << endl;
        }
    }
    
    return 0;
}
