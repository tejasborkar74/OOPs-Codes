#include <iostream>
using namespace std;
template<typename T>

class Stack
{
    T arr[100];
    int position;
public:
    Stack()
   {
        position = -1;
    }
  void push(T data)
   {
        arr[++position] = data;
    }
    T getTop()
    {
        return arr[position];
    }
    void pop()
      {
        if(position>=0){
            position--;
        }
    }
};


int main()
{
    Stack<int> IntStack;
    IntStack.push(3);
    cout<<IntStack.getTop()<<endl;
    Stack<char> charStack;
    charStack.push('A');
    cout<<charStack.getTop()<<endl;
}

