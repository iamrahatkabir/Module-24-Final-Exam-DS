#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<long long, vector<long long>, greater<long long>> pq;

    while (n--)
    {
        long long val;
        cin >> val;

        pq.push(val);
    }

    int query;
    cin >> query;

    while (query--)
    {
        int val;
        cin >> val;

        if (val == 0)
        {
            long long x;
            cin >> x;

            pq.push(x);

            cout << pq.top() << endl;
        }
        if (val == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                cout << pq.top() << endl;
            }
        }
        if (val == 2)
        {
            if(pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();
    
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top() << endl;
            }

        }
    }

    return 0;
}