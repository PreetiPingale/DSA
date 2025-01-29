// hashing
#include<iostream>
using namespace std;
 int hashh[10000000]={0};
void hashing(int arr[],int n)
{
   
    for(int i=0;i<n;i++)
    {
        hashh[arr[i]]++;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        cin>>i;
        cout<<hashh[i]<<" ";
    }
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   hashing(arr,n);
}