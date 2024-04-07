#include <iostream>
#include <string>
using namespace std;

struct Mystack {
    int last = -1;
    int arr[10000];

    void push(int data){
        arr[++last] = data;
    }

    int pop(){
        if (empty()) return -1;
        return arr[last--];
    }

    int size(){
        if (empty()) return 0; 
        return last + 1;
    }

    bool empty(){
        if (last < 0) return true;
        else return false;
    }

    int top(){
        if (empty()) return -1;
        return arr[last];
    }
};

bool isValidParenthesis(string& s) {
    Mystack stack;
    for (char ch : s) {
        if (ch == '(') { // Open 문자면 스택에 넣음
            stack.push(1);
        } else { // Close 문자인 경우
            if (stack.empty()) { // 스택이 비어있다면 VPS X
                return false;
            } else {
                stack.pop(); 
            }
        }
    }
    // 모든 처리가 끝난 후 스택이 비어있지 않으면 VPS X
    return stack.empty();
}

int main() {
    int T;
    cin >> T;
    
    string s;
    for (int i = 0; i < T; i++) {
        cin >> s; 
        if (isValidParenthesis(s)) cout << "YES" << '\n'; 
        else cout << "NO" << '\n';
    }

    return 0;
}
