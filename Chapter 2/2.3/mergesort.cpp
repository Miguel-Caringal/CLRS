#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &list, int l, int m, int r) 
{ 
	int i=0, j=0, k=1; 
	int n1 = m - l + 1; 
	int n2 = r - m; 
	vector <int> leftarray,rightarray;
	// Starting at the left to the middle
	for (i = 0; i < n1; i++) 
    {
        leftarray.push_back(list[l + i]);
    }
    // Starting at the middle to the end 
	for (j = 0; j < n2; j++) 
    {
        rightarray.push_back(list[m + 1+ j]); 
    }

	while (i < n1 && j < n2) 
	{ 
		if (leftarray[i] <= rightarray[j]) 
		{ 
			list[k] = leftarray[i]; 
			i++; 
		} 
		else
		{ 
			list[k] = rightarray[j]; 
			j++; 
		} 
		k++; 
	} 

	while (i < n1) 
	{ 
		list[k] = leftarray[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) 
	{ 
		list[k] = rightarray[j]; 
		j++; 
		k++; 
	} 
} 

void mergesort(vector <int> &list, int l, int r)
{
    int middle;
    if (l < r)
    {
        middle = (r+l)/2;
        mergesort(list,l,middle);
        mergesort(list,middle+1,r);
        merge(list,l,middle,r);
    }
}

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
    int len = list.size()-1;
    mergesort(list,0,len);
    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << '\n';
    }
    return 0;
}