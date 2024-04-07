#include <iostream>
using namespace std;

struct Queue{
   int arr[500001];
   int first = 0;
   int rear = 0;

   void push(int data){
      arr[rear] = data;
      rear = (rear + 1) % 500001;
   }

   int pop(){
      if (empty())
         return -1;
      int ret = arr[first];
      first = (first + 1) % 500001;
      return ret;
   }

   int size(){
      if(rear >= first)
         return (rear - first);
      else
         return (500001 - first + rear);
   }

   bool empty(){
      return (first == rear);
   }

   int front(){
      if (empty())
         return -1;
      return arr[first];
   }
};

int main() {
    Queue q;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    while (q.size() > 1) {
        q.pop(); // 제일 위의 카드를 버리고
        q.push(q.front()); // 그 다음 제일 위 카드를 아래로
        q.pop();
    }

    cout << q.front() << endl; 

    return 0;
}
