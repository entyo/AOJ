#include "cstdio"
#include "iostream"
#include "algorithm"
#include "string"
#include "functional"
#define REP(i,n) for(int i=0; i<n; ++i)
using namespace std;
int main(){
	int n,m,best;
	cin >> n >> m;
	int kyougi[n],touhyoubako[n],touhyoubako_clone[n],shinsain[m];
	REP(i,n) touhyoubako[i] = 0;

	REP(i,n) cin >> kyougi[i];
	REP(i,m) cin >> shinsain[i];

	REP(i,m){
		REP(j,n){
			if(kyougi[j] <= shinsain[i]){
				touhyoubako[j] += 1;
				break;
			}
		}
	}
	//REP(i,n) cout << touhyoubako[i] << endl;
	REP(i,n) touhyoubako_clone[i] = touhyoubako[i];
	sort(touhyoubako,touhyoubako+n,greater<int>());
	//cout << touhyoubako[0] << endl;
	REP(i,n){
		if(touhyoubako_clone[i] == touhyoubako[0]){
			best = i;
			break;
		}
	}
	cout << best+1 << endl;
	return 0;
}