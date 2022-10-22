#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void head(int size);
void upper_body(int size);
void lower_body(int size);
void bottom(int size);

string tents(int iterations);
string flippedTents (int iterations);
int minus_two(int number, int iterations);
int add_two(int number, int iterations);

int main() {
    
    cout << "Size: ";
    int x;
    cin >> x;
    
    cout << endl;
    
    head(x);
    upper_body(x);
    lower_body(x);
    bottom(x);
    
    return 0;
}

void head(int size) { // head of the rocket
    
    for(int i = 1; i <= (size*2) - 1; ++i) {
        cout << setw(size*2) << string(i, '/') << "**" << string(i, '\\') << endl;
    }
    
    cout << "+";
    for(int j = 0; j <= (size*2) - 1; ++j)
        cout << "=*";
    cout << "+\n";
    
}

void upper_body(int size) { // upper half of body
    
    for(int j = 0; j < (size); ++j) { // tents standing upright portion
        
        cout << "|";
        
        cout << string(size-j-1,'.') 
             << tents(j)
             << string(minus_two(size*2, j+1), '.') 
             << tents(j) 
             << string(size-j-1,'.'); 
             
        cout << "|\n";
    }
    
    for(int j = 1; j <= size; ++j) { // tents flipped portion
        
        cout << "|";
        
        cout << string(j-1,'.') 
            << flippedTents(size-j+1)
            << string(add_two(0, j-1), '.') 
            << flippedTents(size-j+1) 
            << string(j-1,'.'); 
            
        cout << "|\n";
    }
    
    cout << "+";
    for(int j = 0; j <= (size*2) - 1; ++j)
        cout << "=*";
    cout << "+\n";
}

void lower_body(int size) { // lower half of body
    
    for(int j = 1; j <= size; ++j) { // tents flipped portion
        
        cout << "|";
        
        cout << string(j-1,'.') 
            << flippedTents(size-j+1)
            << string(add_two(0, j-1), '.') 
            << flippedTents(size-j+1) 
            << string(j-1,'.'); 
            
        cout << "|\n";
    }
    
    for(int j = 0; j < (size); ++j) { // tents standing upright portion
        
        cout << "|";
        
        cout << string(size-j-1,'.') // GOOD
             << tents(j)
             << string(minus_two(size*2, j+1), '.') 
             << tents(j) 
             << string(size-j-1,'.'); // GOOD
             
        cout << "|\n";
    }
    
    cout << "+";
    for(int j = 0; j <= (size*2) - 1; ++j)
        cout << "=*";
    cout << "+\n";
    
}

void bottom(int size) {
    
    for(int i = 1; i <= (size*2) - 1; ++i) {
        cout << setw(size*2) << string(i, '/') << "**" << string(i, '\\') << endl;
    }
    
}

string tents(int iterations) {
    
    string tent = string(1, '/') + string(1, '\\');
    
    for(int i = 1; i <= iterations; ++i)
        tent += string(1, '/') + string(1, '\\');
        
    return tent;
    
}

string flippedTents (int iterations) {
    string tent = string(1, '\\') + string(1, '/');
    
    for(int i = 1; i < iterations; ++i)
        tent += string(1, '\\') + string(1, '/');
        
    return tent;
}

int minus_two(int number, int iterations) {
    for(int i = 0; i < iterations; ++i) {
        number -= 2;
    }
    
    return number;
    
}

int add_two(int number, int iterations) {
    for(int i = 0; i < iterations; ++i) {
        number += 2;
    }
    
    return number;
}

