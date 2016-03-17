//pat_b1001
#include<iostream>
using namespace std;

int main(){
	int n,iStep=0;
	cin >> n;
	while (n != 1){
		if (n % 2 == 0) n /= 2;
		else n = (3*n + 1) / 2;
		iStep++;
	}
	cout << iStep << endl;
	return 0;
}