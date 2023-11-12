#include<iostream>
using namespace std;

string key(string phrase, string typed);

main()
{
    string phrase, typed;
    cout<<"Enter the correct phrase: ";
    getline(cin , phrase);
    cout<<"Enter what you actually typed: ";
    getline(cin , typed);

    string answer =  key( phrase,  typed);
    cout<<"Broken keys: "<<answer;
}
string key(string phrase, string typed)
{
    string result;
    for(int i = 0 ; phrase[i] != '\0' ; i++)
    {
        if(phrase[i] != typed[i] && result.find(phrase[i]) == string :: npos)
        {
           {   
             result = result + phrase[i];
           }
        }
    }
    return result; 
}