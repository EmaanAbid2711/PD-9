#include<iostream>
using namespace std;

void evenOdd(int arr[], int size, int time);

main()
{
    int size, time;
    cout<<"Enter the size of Array: ";
    cin>> size;

    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Enter the number of times even-odd transformation need to be done: ";
    cin>>time;

    evenOdd( arr,  size, time);

    cout<<"[";
    for(int i = 0 ; i < size ; i++)
    {
        if(i < size-1)
        cout<<arr[i]<<", ";
        else
        cout<<arr[i];
    }
    cout<<"]";
}
void evenOdd(int arr[], int size, int time)
{
    for(int i = 0 ; i < time ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            if(arr[j]%2==0)
            {
                arr[j] = arr[j] - 2;
            }
            else 
            {
                arr[j]+=2;
            }
        }
    }

}