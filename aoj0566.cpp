#include "cstdio"
#include "iostream"
#include "algorithm"
#include "string"
#include "functional"
#define REP(i,n) for(int i=0; i<n; ++i)
using namespace std;
int main(){
	int n,max;
	cin >> n;
	int team[n],team_clone[n],juni[n];
	REP(i,n){
		team[i] = 0;
		juni[i] = 0;
	}
	max = n*(n-1)/2;
	int a[max],b[max],c[max],d[max];
	REP(i,max) cin >> a[i] >> b[i] >> c[i] >> d[i];
	REP(i,max){
		if(c[i] > d[i]) team[a[i]-1] += 3;
		else if(c[i] < d[i]) team[b[i]-1] += 3;
		else{
			team[a[i]-1] += 1;
			team[b[i]-1] += 1;
		}
	}
	REP(i,n) team_clone[i] = team[i];
	sort(team,team+n,greater<int>());
	REP(i,n){
		REP(j,n){
			if(team_clone[i] == team[j]){
				juni[i] = j;
				break;
			}
		}
	}
	REP(i,n) cout << juni[i]+1 << '\n';
	return 0;
}