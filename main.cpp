// second max

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxi=arr[0];
    int smax=0;
    int i;
    for(i=1;i<n;i++)
    {
        if(maxi<arr[i])
        {
            smax=maxi;
            maxi=arr[i];
            i++;
            break;
        }
        if(maxi>arr[i])
        {
            smax=arr[i];
            i++;
            break;
        }
    }
    for(int j=i;j<n;j++)
    {
        if(maxi<arr[j])
        {
            smax=maxi;
            maxi=arr[j];
        }
        else if(smax<arr[j] && maxi>arr[j])
            smax=arr[j];
    }
    cout<<smax;
}
