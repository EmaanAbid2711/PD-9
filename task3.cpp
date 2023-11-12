#include<iostream>
using namespace std;

int sameOrNot(string arr[], int element);
main()
{
    int element;
    cout<<"Enter the size of Array: ";
    cin>>element;

    string arr[element];
    for(int i = 0; i < element; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];
    }
    int result = sameOrNot( arr,  element);
    cout<<result;
}
int sameOrNot(string arr[], int element)
{
    int value;
    int a = 0;
    for(int j = 1; j < element; j++)
    {
        if (arr[a] == arr[j])
        {
            value = 1;
        }
        else 
        value = 0;
        a++;
    }
    return value;
}