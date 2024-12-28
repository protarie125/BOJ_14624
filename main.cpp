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

ll N;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N;
  if (N % 2 == 0) {
    cout << "I LOVE CBNU";
    return 0;
  }

  const auto& v = (N + 1) / 2;

  for (auto i = 0; i < N; ++i) {
    cout << '*';
  }
  cout << '\n';

  for (auto i = 0; i < v; ++i) {
    for (auto j = 0; j < N / 2 - i; ++j) {
      cout << ' ';
    }
    cout << '*';

    if (i == 0) {
      cout << '\n';
      continue;
    }

    for (auto j = 0; j < (i - 1) * 2 + 1; ++j) {
      cout << ' ';
    }
    cout << '*';

    if (i < v - 1) cout << '\n';
  }

  return 0;
}