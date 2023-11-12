#include<iostream>
using namespace std;

int same(string first, string second);

main()
{
    string first, second;
    cout<<"Enter the first string: ";
    cin>>first;
    cout<<"Enter the second string: ";
    cin>>second;

    int result = same( first,  second);
    cout<<"Number of common characters: "<<result;
}
int same(string first, string second)
{
    int count = 0;
    for (int i = 0 ; first[i] != '\0' ; i++)
    {
        for (int j = 0 ; second[j] != '\0' ; j++)
        {
            if (first[i] == second[j])
            {
                count++;
                second.erase(j,j);
                break;
            }
        }
    }
    return count;
}