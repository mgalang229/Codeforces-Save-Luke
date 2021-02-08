#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
	cin.tie(0);
  double d, l, v1, v2;
  cin >> d >> l >> v1 >> v2;
  // total distance = l - d
  // total speed = v1 + v2;
  // total time = total distance / total speed
	cout << fixed << setprecision(20) << (l - d) / (v1 + v2) << '\n';
	return 0;
}      
