#include "cstdio"
#include "iostream"
#include "algorithm"
#include "string"
#include "functional"
#define REP(i,n) for(int i=0; i<n; ++i)
using namespace std;
int main(){
	int score[5];
	REP(i,5){
		cin >> score[i];
		if(score[i] < 40) score[i] = 40;
	}
	cout << (score[0]+score[1]+score[2]+score[3]+score[4])/5 << endl;
	return 0;
}