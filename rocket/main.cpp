#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void head(int size);
void body(int size);

int main() {
    
    cout << "Size: ";
    int x;
    cin >> x;
    
    cout << endl;
    
    head(x);
    
    return 0;
}

void head(int size) {
    
    for(int i = 1; i <= (size*2) - 1; ++i) {
        cout << setw(size*2) << string(i, '/') << "**" << string(i, '\\') << endl;
    }
    
    cout << "+=*=*=*=*=*=*+" << endl;
    
}

void body(int size) {
    
}
