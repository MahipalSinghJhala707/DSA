#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>n;
    }
    
    int count[2];
    int flag = 0,x,y;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] != arr[i+1]){
            cout<<"in if";
            flag=1;
            x=arr[i];
            y=arr[i+1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==x)
            count[0]++;
        else if (arr[i]==y)
        {
            count[1]++;
        }
        else{
            cout<<"NO1"<<endl;
            return 0;
        }
    }
    

    if(flag==0)
        cout<<"YES2"<<endl;
    else if((count[0]==n/2 || count[0]==(n+1)/2) && (count[1]==n/2 || count[1]==(n+1)/2))
        cout<<"YES1"<<endl;
    else
        cout<<"NO2"<<endl;
    return 0;
}