#include <iostream>
#include <vector>

using namespace std;

vector <int> insertionsort(vector <int>);

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
    list = insertionsort(list);
    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << '\n';
    }
    return 0;
}

vector <int> insertionsort(vector <int> list)
{
    int key = 0, sortedend;
    for (int i = 1; i < list.size(); i++)
    {
        // Element to be checked against the rest of the list
        key = list[i];
        // Starting point of the end of the already sorted array
        sortedend = i - 1;
        // Keep looking for where to place the element while there's still list elements and the place hasn't been found
        while (sortedend >= 0 && list[sortedend]<key)
        {
            // Move the current element over 
            list[sortedend+1] = list[sortedend];
            // Move to the next left element to be checked
            sortedend = sortedend -1;
        }
        list[sortedend+1] = key;
    }
    return list;
}