#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

bool binarysearch(vector <int> list, int value)
{
    int end = list.size()-1, start = 0, middle = (start+end)/2;
    while (start <= end)
    {
        if (value > list[middle])
        {
            start = middle+1;
            middle = (start+end)/2;
        }
        else if (value < list[middle])
        {
            end = middle-1;
            middle = (start+end)/2;
        }
        else if (value == list[middle])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector <int> list;
    int length, temp, value;
    cout << "Enter Array Length" << '\n';
    cin >> length;
    for (int i = 0; i < length;i++)
    {
        cin >> temp;
        list.push_back(temp);
    }
    cout << "Value to Search" << endl;
    cin >> value;
    temp = binarysearch(list,value);
    cout << temp << endl;
    return 0;
}