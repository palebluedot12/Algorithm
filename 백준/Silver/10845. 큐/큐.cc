#include <iostream>
using namespace std;

struct Queue{
   int arr[10000];
   int first = 0;
   int rear = 0;

   void push(int data){
      arr[rear++] = data;
   }

   int pop(){
      if (empty())
         return -1;
      return arr[first++];
   }

   int size(){
      if(!empty())
         return (rear - first);
      else
         return 0;
   }

   bool empty(){
      return (first == rear);
   }

   int front(){
      if (empty())
         return -1;
      return arr[first];
   }

   int back(){
      if (empty())
         return -1;
      return arr[rear-1];
   }
};

int main(void){
   int N;
   cin >> N;
   string order;

   Queue q;

   for (int i = 0; i < N; i++){
      cin >> order;

      if (order == "push"){
         int data;
         cin >> data;
         q.push(data);
      }

      else if (order == "front") 
         cout << q.front() << endl;
      else if (order == "back")
         cout << q.back() << endl;
      else if (order == "size")
         cout << q.size() << endl;
      else if (order == "empty")
         cout << q.empty() << endl;
      else if (order == "pop")
         cout << q.pop() << endl;
   }
}