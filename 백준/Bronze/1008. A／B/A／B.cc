#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int A, B;
    double result;
    
    cin >> A >> B;
    result = (double)A / B;
    cout << setprecision(10) << result;
    
    return 0;
}