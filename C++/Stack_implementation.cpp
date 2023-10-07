#include <iostream>

using namespace std;
class Stack{
  public:
  //properties
  int value;
  int *arr;
  int size;
  
  //behaviour
  Stack(int size)
  {
      this->size=size;
      arr=new int[size];
      value=-1;
  }
  
  void push(int element)
  {
      if(size-value>1)
      {
          value++;
          arr[value]=element;
      }
      else{
          cout<<"Stack overflow"<<endl;
      }
  }
  void pop()
  {
      if(value>=0)
      {
          value--;
      }
      else{
          cout<<"Stack Underflow"<<endl;
      }
  }
  int top()
  {
      if(value>=0)
      return arr[value];
      else{
      cout<<"Stack is empty"<<endl;
      return -1;
          
      }
  }
  bool empty()
  {
      if(value==-1)
      return true;
      else
      return false;
  }
  
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
     cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
   
   if(st.empty())
   cout<<"Stack is empty"<<endl;
   else
   cout<<"Stack is not empty"<<endl;

    return 0;
}
