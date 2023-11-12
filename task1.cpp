#include<iostream>
using namespace std;

bool iseven(string word);

main()
{
    string word;
    cout<<"Enter a String: ";
    cin>>word;
    int result = iseven(word);
    cout<<result;
}
bool iseven(string word)
{
    int count = 0;
    for(int i = 0 ; word[i] != '\0' ; i++)
    {
        count ++ ;
    }
    if(count%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}