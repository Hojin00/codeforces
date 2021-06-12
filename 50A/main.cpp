#include <bits/stdc++.h>
#define CIA createArray

using namespace std;


vector<int> CIA(int n);
int main(void)
{

	int M, N;
    cin >> M >> N;
    cout << M * N / 2 << endl;
    return 0;
}

vector<int> CIA(int n){

	vector<int> v;

	for(int i = 0; i < n; i++){
		int a;
		scanf("%d", &a);

		v.push_back(a);
	}

	return v;
}