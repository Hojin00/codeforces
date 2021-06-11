#include <bits/stdc++.h>

using namespace std;
vector<int> createArray(int n);
int main(void)
{

	int num;
	scanf("%d", &num);
	vector<int> scores = createArray(num);

	for(int a: scores){
		cout << a << " ";
	}
}

vector<int> createArray(int n){

	vector<int> v;

	for(int i = 0; i < n; i++){
		int a;
		scanf("%d", &a);

		v.push_back(a);
	}

	return v;
}