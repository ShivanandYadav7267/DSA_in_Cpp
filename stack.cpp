#include <iostream>
#include <stack>
using namespace std;



/*
Member Functions:

Member Functions (for stack):

empty(): Checks if the stack is empty (i.e., whether its size is 0).

size(): Returns the number of elements in the stack.

top(): Accesses the top element of the stack, which is the most recently added element.

push(const T& value): Adds an element to the top of the stack.

pop(): Removes the top element from the stack.

swap(stack& x): Swaps the contents of the stack with those of another stack of the same type.

*/


int main(){

stack<int> firstStack;


firstStack.push(10);
firstStack.push(20);
firstStack.push(30);

cout<<firstStack.top()<<endl;

firstStack.pop();

cout<<firstStack.top()<<endl;

cout<<firstStack.size()<<endl;

if(firstStack.empty() == true){
    cout<<"Stack is empty."<<endl;
}else{
    cout<<"Stack is not empty."<<endl;
}

stack<int>secondStack;
secondStack.push(1);
secondStack.push(2);

firstStack.swap(secondStack);

cout<<firstStack.top()<<endl;

    return 0;
}














