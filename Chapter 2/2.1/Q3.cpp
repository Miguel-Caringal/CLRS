#include <iostream>
#include <vector>

using namespace std;
void linearsearch (vector <int>, int);

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
    cout << "Enter Search Value" << endl;
    cin >> value;
    linearsearch(list,value);
    return 0;
}

void linearsearch (vector <int> list, int value)
{
    bool found = false;
    for (int i = 0; i<list.size();i++)
    {
        if (list[i] == value)
        {
            found = true;
            cout << i+1 << endl;
        }
    }
    if (found == false)
    {
        cout << "Not Found" << endl;
    }
}