#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector <int> selectionsort(vector <int>);

int main()
{
    vector <int> list;
    int length, temp;
    cout << "Enter Array Length" << '\n';
    cin >> length;
    for (int i = 0; i < length;i++)
    {
        cin >> temp;
        list.push_back(temp);
    }
    list = selectionsort(list);
    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << '\n';
    }
    return 0;
}

vector <int> selectionsort(vector <int> list)
{
    int holder, smallestplace;
    for (int i = 0; i< list.size()-1;i++)
    {
        int smallest = INT_MAX;
        for (int j = i; j< list.size();j++)
        {
            if (list[j] < smallest)
            {
                smallest = list[j];
                smallestplace = j;
            }
        }
        holder = list[i];
        list[i] = smallest;
        list[smallestplace] = holder;
    }
    return list;
}