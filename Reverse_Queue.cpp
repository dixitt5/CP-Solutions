#include<bits/stdc++.h>
using namespace std;

void Reverse_Queue_using_Stack(queue &q)
{
  stack s;
  while(!q.empty())
  {
    s.push(q.front());
    q.pop();
  }
  while(!s.empty())
  {
    q.push(s.top());
    s.pop();
  }
}

void Reverse_Queue_using_Recursion(queue &q)
{
  int a=q.front();
  if(q.size()==1) return;
  q.pop();
  Reverse_Queue_using_Recrustion(q);
  q.push(a);
}

void Show(queue q)
{
  int a=q.front();q.pop();
  cout<<a<<" ";
  if(q.empty()) 
  {
    q.push(a);
    return;
  }
  Show(q);
  q.push(a);
}

int main()
{
  queue q;
  q.push(1);q.push(2);q.push(3);
  q.push(7);q.push(8);q.push(9);
  
  Show(q);
  cout<<endl;
  Reverse_Queue_using_Stack(q);
  
  Show(q);
  cout<<endl;
  Reverse_Queue_using_Recursion(q);
  Show(q);
}
