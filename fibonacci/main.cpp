#include <iostream>
#include <iomanip>

using namespace std;

int fibonacci(int i);

int main() {
    cout << "*****" << endl;
    cout << "********" << endl;
    cout << "*************" << endl;
    
    fibonacci(5);
    
    return 0;
}

int fibonacci(int i) {
    
    cout << "Term   " << i << ":" << setw(10) << fibonacci(i-1) + fibonacci(i-2);    
    
    if (i < 2)
        return i;
    else
        return fibonacci((i-1)+(i-2));
        
}

