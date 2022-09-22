#include <iostream>
#include <math.h>
using namespace std;
int binaryTodacimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans = ans + x * y;
        x = x * 2;
        n = n / 10;
    }
    return ans;
}

main()
{
    int n;
    cin >> n;
    cout<<binaryTodacimal(n)<<endl;

}