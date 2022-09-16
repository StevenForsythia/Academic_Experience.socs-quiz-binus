#include <iostream>
using namespace std;

int main() {
    
    int A, B, C = 0;
    
    cin >> A;
    cin >> B;
    
    for(int i = A; i <= B; i++){
        C = C + i;   
    }
    
    cout << C << endl;

    return 0;
}