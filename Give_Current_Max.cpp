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
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks < r.marks)
            return true;
        else if (l.marks > r.marks)
            return false;
        else
            return l.roll > r.roll;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;
    // cin.ignore();

    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj = Student(name, roll, marks);

        pq.push(obj);
    }

    int query;
    cin >> query;

    while (query--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj = Student(name, roll, marks);

            pq.push(obj);

            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        if (cmd == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
        if (cmd == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();

                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
    }

    // while(!pq.empty())
    // {
    //     cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    //     pq.pop();
    // }

    return 0;
}