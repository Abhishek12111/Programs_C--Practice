#include <iostream>
#include <algorithm> // For std::min
using namespace std ;
int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int mcombo = (n / m) * b + min((n % m) * a, b);
    int costone = n * a;

    int min_cost = min(mcombo, costone);

    cout << min_cost << endl;

    return 0;
}
