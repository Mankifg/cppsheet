# Mankifg's cpp sheet
* CR  - compile & run
* CRI - compile & run & input (run with input from file)
## Bash aliases
```bash
alias cls='clear'
alias py='python3'

alias cr='f(){ g++  --std=c++17 -DMANKIFG -Wshadow -Wall "$@" && ./a.out; unset -f f; }; f'
alias cri='f(){ g++ --std=c++17 -DMANKIFG -Wshadow -Wall "$1" && ./a.out < ${1%.*}; unset -f f;}; f'
alias template='f(){ cp ../template.cpp "$@";unset -f f;};f'
```

## Template
```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define ff first
#define ss second
#define pb push_back
#define all(x) (x).begin(),(x).end()
typedef vector<int> vi;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);
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