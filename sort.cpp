#include "cstdio"
#include "iostream"
#include "algorithm"
#include "string"
#define REP(i,n) for(int i=0; i<n; ++i)
using namespace std;

int main(){
	vector<int> a;
	REP(i,10) a.push_back(i*-1);
	REP(i,10) cout << a[i] << endl;
	sort(a.begin(),a.end());
	REP(i,10) cout << a[i] << endl;
	return 0; 
}