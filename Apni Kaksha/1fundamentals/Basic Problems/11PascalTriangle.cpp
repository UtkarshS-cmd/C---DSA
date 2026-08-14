#include <iostream> 
using namespace std; 

// Function to calculate factorial
double fact(int x) { 
    double f = 1; 
    for(int i = 1; i <= x; i++) { 
        f *= i; 
    } 
    return f; 
} 

int ncr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main() { 
    int numRows = 5;
    for(int i = 0; i <= numRows; i++){
        for(int j = 0; j <= numRows-i; j++){ //space 
            cout<<" ";
        }
        for(int j = 0; j <= i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0; 
} 