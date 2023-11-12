#include<iostream>
using namespace std;

string presenceOfSeven(int arr[], int size );

main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;

    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>> arr[i];
    }
    cout<<presenceOfSeven(arr, size );
     
}
string presenceOfSeven(int arr[], int size )
{
    string answer;
    for(int j = 0 ; j < size ; j++)
    {

        int element = arr[j];
        if(element%10 == 7 || element/10 == 7)
        {
            answer = "Boom!";
            break;
        } 
        else
        {
            answer = "there is no 7 in the array";
        }
    }
    return answer;
}