#include <iostream>
#include <iomanip>

using namespace std;

int fibonacci(int i);

int main() {
    cout << "*****" << endl;
    cout << "********" << endl;
    cout << "*************" << endl;
    
    int total = 0, term = 1, i = 1;
    
    while(fibonacci(i) < 1000000000) {
        
        int number = fibonacci(i);
        cout << "Term" << setw(3) << term << ": " << setw(9) << number << endl;
        
        i++;
        term++;
        total += number;
        
    }
    
    cout << "*********************" << endl;
    cout << "Sum of the 44 terms:" << setw(11) << total << endl;
    cout << "**********************************" << endl;
    
    return 0;
}

int fibonacci(int i) {
    
    if (i == 1)
        return 1;
        
    else if (i == 2)
        return 1;
        
    else
        return (fibonacci(i-1) + fibonacci(i-2));
        
}

