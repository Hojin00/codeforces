#include <bits/stdc++.h>

using namespace std;
vector<int> createArray(int n);

int main(void)
{
	string str;
	cin >> str;

	int count = 1;

    for (size_t first = 1; first < str.length(); ++first) {
    	

    	if(str[first] == str[first - 1]){
    		count++;

    		if(count == 7){
    			cout << "YES";

    			return 0;
    		}
    	} else {
    		count = 1;
    	}

    	

    }

    cout << "NO";
	
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