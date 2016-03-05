//pat_b1013
#include<iostream>
#include<cmath>
using namespace std;

bool sushu(int x){
	if (x == 1) return false;
	for (int i = 2; i <= sqrt(x); i++){
		if (x%i == 0) return false;
	}
	return true;
}

int main(){
	int m, n,count=0,n_cnt=0;
	cin >> m >> n;
	for (int i = 2;; i++){
		if (sushu(i)) count++;
		if (sushu(i) && count >= m&&count <= n){
			n_cnt++;
			cout << i;
			if (n_cnt % 10 == 0) cout << endl;
			else if(count!=n) cout << " ";
			else cout << endl;
		}
		if (count > n) break;
	}
	return 0;
}