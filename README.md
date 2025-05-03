# Mankifg's cpp sheet

## Template
```cpp
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
typedef long long ll;
ll MOD = 1000000007;

void solve() {

}

int main() {
    ll test_cases;
    // test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
}
```
### FILE read/write

```cpp
void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
setIO("problemname");

```