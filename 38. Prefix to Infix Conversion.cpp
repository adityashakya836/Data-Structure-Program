//Program for Prefix to Infix Conversion
#include<iostream>
#include<stack>
using namespace std;

bool isOperator(char x){
	switch(x){
		case '+':
		case '-':
		case '/':
		case '*':
		return true;
	}
	return false;
}

string prefixToInfix(string prefix_exp){
	stack<string> s;
	int len = prefix_exp.size();
	for(int i=len-1;i>=0;i--){
		if(isOperator(prefix_exp[i])){
			string op1=s.top(); s.pop();
			string op2=s.top(); s.pop();
			string new_exp="("+op1+prefix_exp[i]+op2+")";
			s.push(new_exp);
		}
		else{
			s.push(string(1,prefix_exp[i]));
		}
	}
	return s.top();
}

int main(){
	string prefix_exp="/+P-*QCD*EF";  /*Given Prefix Expression*/
	cout<<"Infix : "<< prefixToInfix(prefix_exp);
	return 0;
}
