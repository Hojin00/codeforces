#include <bits/stdc++.h>

using namespace std;
vector<int> createArray(int n);
int main(void)
{
	int num, target, score, passed; 

	scanf("%d %d", &num, &target);

	vector<int> scores = createArray(num);


	if(scores[0] == 0){
		cout << "0";
	} else {
		score = scores[target-1];

		for(int x: scores){
			if(x == 0){
				break;
			} else {
				if(x >= score){
					passed++;
				}
			}
			
		}
		cout << passed;
	}//test
	
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