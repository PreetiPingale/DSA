#include<iostream>
using namespace std;

void hashing(string s)
{
    int hashh[256]={0};
    for(int i=0;i<s.size();i++)
    {
        hashh[s[i]]++;
    }
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin>>c;
        cout<<hashh[c]<<" ";
    }
}
int main()
{
   string s;
   cin>>s;
   hashing(s);
}