#include "cstdio"
#include "iostream"
#include "algorithm"
#include "string"
#include "functional"
#define REP(i,n) for(int i=0; i<n; ++i)
using namespace std;
int main(){
	int a,b,c,d,p,x,y,cost;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> p;

	x=a*p;
	if(p<=c) y=b;
	else y=b+d*(p-c);
	cost = min(x,y);
	
	cout << cost << endl;
	return 0;
}