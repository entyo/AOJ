#include "cstdio"
#include "iostream"
#include "algorithm"
#include "string"
#include "functional"
#define REP(i,n) for(int i=0; i<n; ++i)
using namespace std;
int main(){
	int h,w;
	cin >> h >> w;
	char sky[w];
	int after_sky[w];
	REP(i,h){
		REP(z,w){
			sky[z] = 0;
			after_sky[z] = 0;
		}
		REP(z,w){
			cin >> sky[z];
		}
		REP(j,w){
			if(sky[j] == 'c'){
				after_sky[j] = 0;
			}else{
				for(int k=j; k>=0; --k){
					if(sky[k] == 'c'){
						after_sky[j] = j-k;
						break;
					}else{
						after_sky[j] = -1;
					}
				}
			}
		}
		REP(z,w){
			if(z == w-1) cout << after_sky[z] << '\n'; 
			else cout << after_sky[z] << '\0';
		}
	}
	return 0;
}