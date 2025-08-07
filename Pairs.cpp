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

class Student
{
    public:
    string name;
    int val;

    Student(string name, int val)
    {
        this->name = name;
        this->val = val;
    }
};

class cmp{
    public:
    bool operator()(Student l, Student r)
    {
        if(l.name > r.name)
            return true;
        else if(l.name < r.name)
            return false;
        else
            return l.val < r.val;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;

    while(n--)
    {
        string name;
        int val;
        cin >> name >> val;

        Student obj = Student(name, val);

        pq.push(obj);
    }

    while(!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().val << endl;
        pq.pop();
    }


    return 0;
}