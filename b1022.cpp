//pat_b1022
#include<iostream>
#include<stack>
using namespace std;

int main(){
	unsigned long long A, B;
	int D;
	stack<int> numberStack;
	cin >> A >> B >> D;
	A = A + B;
	if (A == 0) {
		cout << "0" << endl; return 0;
	}
	while (A){
		int mod = A%D;
		numberStack.push(mod);
		A /= D;
	}
	while (!numberStack.empty()){
		cout << numberStack.top();
		numberStack.pop();
	}
	cout << endl;
	return 0;
}