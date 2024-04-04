#include <iostream>
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


int main(void){
    Mystack s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string order;
        cin >> order;

        if (order == "push"){
            int data;
            cin >> data;
            s.push(data);
        }

        else if (order == "pop"){
            cout << s.pop() << '\n';
        }

        else if (order == "size"){
            cout << s.size() << '\n';
        }

        else if (order == "empty"){
            cout << s.empty() << '\n';
        }

        else if (order == "top"){
            cout << s.top() << '\n';
        }
    }

}