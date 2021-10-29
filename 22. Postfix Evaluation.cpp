//Program to Evaluation of Postfix Expression

#include <iostream>
#include <string>
#include <stack>
using namespace std;
 
// Function to evaluate a given postfix expression
int evalPostfix(string exp)
{
    stack<int> stack;
    for (int c=0; c<exp.length();c++)
    {
        if (c >= '0' && c <= '9') {
            stack.push(c - '0');
        }
        else {
            int x = stack.top();
            stack.pop();
 
            int y = stack.top();
            stack.pop();
            if (c == '+') {
                stack.push(y + x);
            }
            else if (c == '-') {
                stack.push(y - x);
            }
            else if (c == '*') {
                stack.push(y * x);
            }
            else if (c == '/') {
                stack.push(y / x);
            }
        }
    }
 
    return stack.top();
}
 
int main()
{
    string exp = "138*+";
    cout << evalPostfix(exp);
   return 0;
}
