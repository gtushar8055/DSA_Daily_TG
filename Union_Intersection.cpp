#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

void printUnion(vector<int> arr1, vector<int> arr2)
{
    unordered_set<int> s;

    for (int ele : arr1)
    {
        s.insert(ele);
    }

    for (int ele : arr2)
    {
        s.insert(ele);
    }

    for (int ele : s)
    {
        cout << ele << " ";
    }

    cout << endl;
}

void printIntersection(vector<int> arr1, vector<int> arr2)
{
    unordered_set<int> s;

    for (int ele : arr1)
    {
        s.insert(ele);
    }

    for (int ele : arr2)
    {
        if (s.find(ele) != s.end())
        {
            cout << ele << " ";
        }
    }

    cout << endl;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {4, 3, 5, 6, 7};

    cout << "Union : ";
    printUnion(arr1, arr2);
    cout << "Intersection : ";
    printIntersection(arr1, arr2);
    return 0;
}