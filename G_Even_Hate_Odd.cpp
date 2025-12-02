#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin >> n;
        int x;
        int odd = 0; 
        int even = 0;
        for(int i=0; i<n; i++) 
        {
            cin >> x;
            if (x%2 == 0)
            {
                even++;
            }
            else odd++;
        }
        if (n%2 != 0)
        {
            cout << -1 << endl; 
        } 
        else
        {
            int trg = n/2;
            cout << abs(even-trg) << endl;
        }
    }
    return 0;
}
