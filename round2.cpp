#include "cstdio"
#include "iostream"
#include "algorithm"
#include "string"
#include "functional"
#define REP(i,n) for(int i=0; i<n; ++i)
using namespace std;
int main(){
	int n,m;
	cin >> n; cin >> m;

	int target[m],friends[n],score[n];
	REP(i,n) score[i] = 0;
	REP(i,m) cin >> target[i]; //ok

	REP(i,m){

		REP(z,n) cin >> friends[z]; //ok

		REP(j,n){
			if(friends[j] == target[i]) score[j] += 1;
			else score[target[i]-1] += 1;
		}
	}

	REP(i,n) cout << score[i] << '\n';
	return 0;
}