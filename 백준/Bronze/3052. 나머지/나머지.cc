#include <iostream>
 
using namespace std;
 
int main(void) {
 
	int count[42] = {};	
	
	int input;

	for(int i = 0; i < 10; i++) {
		cin >> input;
		count[input % 42]++;	
	}
 
	int result = 0;
	
	for(int v : count) {
		if(v > 0) {		
			result++;
		}
	}
	cout << result;
  
}