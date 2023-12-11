#include<bits/stdc++.h>

using namespace std;
#define endl "\n"

string s;
int n;
vector<string> ans;

void dfs(int i, string substr){
	
	if(i == n){
		ans.push_back(substr);
		return ;
	}
	
	//pega o char s[i]
	dfs(i+1,substr+s[i]);
	//n pega
	dfs(i+1,substr);		

}


int main()
{
	cin >> s;
	
	n = s.size();
	
	//primeiro char esta na posicao zero
	
	dfs(0,"");
	
	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << endl;
	}
	
	return 0;
}