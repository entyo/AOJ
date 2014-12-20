#include "cstdio"
#include "iostream"
#include "algorithm"
#include "string"
#include "map"
#define REP(i,n) for(int i=0; i<n; ++i)
using namespace std;

int main(void){
	int n;
	cin >> n;
	int taros_hand[n+1]={},hands[2*n+1]={};
	REP(i,n+1){
		cin >> taros_hand[i]; //与えられたn枚の太郎の手札をドカン
	}
	REP(i,2*n+1){
		hands[taros_hand[i]] = 1;　//太郎の手札となっているカードを1で表現する
	}
	REP(i,2*n+1){
		if (hands[i] != 1) hands[i] = 2; //初期状態においては、太郎の手札以外は花子の手札であるからこれを2で表現 
	}
	REP(i,2*n+1){
		
	}
	return 0;
}