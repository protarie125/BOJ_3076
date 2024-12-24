#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll R, C, A, B;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> R >> C >> A >> B;

  ll x = 1;
  for (auto i = 0; i < R; ++i) {
    for (auto a = 0; a < A; ++a) {
      ll y = x;
      for (auto j = 0; j < C; ++j) {
        for (auto b = 0; b < B; ++b) {
          if (y == 1)
            cout << 'X';
          else
            cout << '.';
        }
        y *= -1;
      }
      cout << '\n';
    }
    x *= -1;
  }

  return 0;
}