#include<iostream>
using namespace std;

int Time(string arr[], int size);

main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;

    string arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];
    }
    int result =  Time( arr,  size);
    cout<<"Time to color: "<<result<<" seconds";
}
int Time(string arr[], int size)
{
    
    string colour = arr[0];
    int change = 0;
    int changetime = 0;
    int colouringtime = 0;
    int total = 0;
    for (int i = 1 ; i < size ; i++)
    {
        if (colour != arr[i])
        {
            change++;
        }
        colour = arr[i];
        
    }
    colouringtime = size * 2;
    changetime = change;
    total = colouringtime + changetime;
    return total;
}