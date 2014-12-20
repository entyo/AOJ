#include "cstdio"
#include "iostream"
#include "algorithm"
#include "string"
#define REP(i,n) for(int i=0; i<n; ++i)
using namespace std;
int main(){
	int n;
	cin >> n;
	int result[n],first_score[n],second_score[n],third_score[n];
	REP(i,n) result[i] = 0;
	REP(i,n) cin >> first_score[i] >> second_score[i] >> third_score[i];
	REP(i,n){
		REP(j,n){
			if(i == j) result[i] += 0;  
			else if(first_score[i] == first_score[j]){
				result[i] = 0;
				break;
			}
		}
		result[i] += first_score[i];
	}
	REP(i,n){
		REP(j,n){
			if(i == j) result[i] += 0;  
			else if(second_score[i] == second_score[j]){
				result[i] = 0;
				break;
			}
		}
		result[i] += second_score[i];
	}
	REP(i,n){
		REP(j,n){
			if(i == j) result[i] += 0;  
			else if(third_score[i] == third_score[j]){
				result[i] = 0;
				break;
			}
		}
		result[i] += first_score[i];
	}

	REP(i,n) cout << result[i] << '\n';	
	return 0;
}