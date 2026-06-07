#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define ff first
#define ss second
#define pb push_back
#define all(x) (x).begin(),(x).end()
typedef vector<int> vi;

#ifdef MANKIFG
#define dbg(x) {auto x_=x; cerr<<"\e[91m"<<__func__<<":"<<__LINE__<<"\t"<<#x<<" = "<<x_<<"\e[39m"<<endl;}
#else
#define dbg(x)
#endif
template<typename Ostream, typename Cont>
typename enable_if<is_same<Ostream,ostream>::value, Ostream&>::type operator<<(Ostream& os,  const Cont& v){
        os<<"[";
        for(auto& x:v){os<<x<<", ";}
        return os<<"]";
}
template<typename Ostream, typename ...Ts>
Ostream& operator<<(Ostream& os,  const pair<Ts...>& p){
        return os<<"{"<<p.first<<", "<<p.second<<"}";
}

void mankifg() {

}

signed main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    //freopen("problem.in", "r", stdin);
    //freopen("problem.out", "w", stdout);

    ll test_cases;
    test_cases = 1;
    cin >> test_cases;

    while (test_cases--) {

        #ifdef MANKIFG
            cout << "---" << endl;
        #endif


        mankifg();
    }
}