#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <cstring>
#include <string>
#include <cmath>
#include <ctime>
#include <utility>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <sstream>
#define FOR(a,b,c) for (int a=b,_c=c;a<=_c;a++)
#define FORD(a,b,c) for (int a=b;a>=c;a--)
#define REP(i,a) for(int i=0,_a=(a); i<_a; ++i)
#define REPD(i,a) for(int i=(a)-1; i>=0; --i)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(a) int(a.size())
#define reset(a,b) memset(a,b,sizeof(a))
#define oo 1000000007

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

#include <conio.h>

int n,a[4007];

int main(){
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    int a,b;
    int val=0,cnt0=0;
    FOR(i,1,n*2){
        scanf("%d.%d",&a,&b);
        if(b==0) cnt0++;
        val-=b;
    }
    int res=val+1000*n;
    int t=res;
    REP(i,min(cnt0,n)){
        t-=1000;
        res=min(res,abs(t));
    }
    printf("%0.3lf\n",1.0*abs(res)/1000);
    //getch();
    return 0;
}    
        
    
