#include <bits/stdc++.h>

using namespace std;

#define MAX 1000001

int main(){
	int a, b;

	while(cin>>a>>b){
		int *juan = new int[MAX];
		int *ricardo = new int[MAX];
		int total = 0;

		vector<int>j;
		vector<int>r;

		for(int x=0; x<a; x++) cin>>juan[x];
		for(int x=0; x<b; x++) {
			cin>>ricardo[x];

			bool flag = false;
			for(int y=0; y<a; y++){
				if(ricardo[x] == juan[y]){
					flag = true;
					break;
				}
			}
			if(flag){
				j.push_back(ricardo[x]);
				r.push_back(ricardo[x]);
				total++;
			}
		}
		string ans = "sim";

		for(int x=0; x<total; x++){
			if(j[x] != r[x]){
				ans = "nao";
				break;
			}
		}

		cout << ans << endl;

	}

	return 0;
}