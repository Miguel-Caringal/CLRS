#include <iostream>
#include <vector>

using namespace std;
void addbinary (vector <int>, vector <int>);

int main()
{
    vector <int> listone, listtwo;
    int length, temp;
    cout << "Enter Array Length" << '\n';
    cin >> length;
    cout << "Array 1" << endl;
    for (int i = 0; i < length;i++)
    {
        cin >> temp;
        listone.push_back(temp);
    }
    cout << "Array 2" << endl;
    for (int i = 0; i < length;i++)
    {
        cin >> temp;
        listtwo.push_back(temp);
    }
    addbinary(listone,listtwo);
    return 0;
}

void addbinary (vector <int> listone, vector <int> listtwo)
{
    int finallist [listone.size()];
    int carry = 0;
    for (int i = listone.size()-1; i >= 0; i--)
    {
        finallist[i+1] = (listone[i] + listtwo[i] + carry)%2;
        if (listone[i] + listtwo[i] + carry >= 2)
        {
            carry = 1;
        }
        else
        {
            carry = 0;
        }
    }
    finallist[0] = carry;
    for (int i = 0; i<= listone.size();i++)
    {
        cout << finallist[i] << endl;
    }
}