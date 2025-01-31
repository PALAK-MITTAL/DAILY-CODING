#include <iostream>
#include<queue>
using namespace std;

int main() {

  queue<int>q;
  
  //insertion
  q.push(10);
  q.push(15);

  //getsize of queue
  cout<<"size:"<<q.size()<<endl;

  //check empty or not queue
  if(q.empty()){
    cout<<"queue q is empty."<<endl;
  }else{
    cout<<"queue q is not empty."<<endl;
  }

// popping elements
q.pop();
cout<<"size of queue after pop 1 element:"<<q.size()<<endl;

q.push(20);
q.push(30);
q.push(40);
q.push(50);

// accessing first and last element of  of queue
cout<<endl<<"element at front of queue:"<<q.front()<<endl;
cout<<"element at last(rear) of queue:"<<q.back()<<endl;



  return 0;
}