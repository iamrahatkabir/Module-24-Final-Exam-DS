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
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);

        string word;

        map<string, int> mp;
        
        int max = INT_MIN;
        string top;

        while (ss >> word)
        {
            mp[word]++;

            if(mp[word] > max)
            {
                max = mp[word];
                top = word;
            }

        }

        cout << top << " " << max << endl;
        
    }

    return 0;
}