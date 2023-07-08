#include <iostream>
using namespace std;
int main()
{
    int a, b, x, y;
    double c, d;
    cin >> a >> b >> c;
    cin >> x >> y >> d;
    double ans = (b * c) + (y * d);
    cout << "VALOR A PAGAR: R$ " << ans << endl;
    cout << endl;

    return 0;
}