/*Meena will always wants to change the number in such a way that it will be divisible by 3 after her chance. If initially n is not divisilbe by
3 then she can always win by increasing n by 1 or decreasing it by 1.
But if initial number is already divisble by 3 then she need to do an operation n = n+1 or n= n-1 in both the case n after her chance will
never be divisible by 3 and Rohit will always try to delay this divisibility so that He can win after 10 chace and Rohit will win finally.*/

#include <iostream>
using namespace std;

int main(){
    int n ,flag1=0,flag2=0;
    cin>>n;
    for (int i = 0; i < 20; i++)
    {   if(i%2==0){
            if((n-1)%3==0){
                cout<<"Girl won"<<endl;
                return 0;
            }
            else if((n+1)%3==0){
                cout<<"Girl won"<<endl;
                return 0;
                }
        }
    }
    cout<<"Boy won !!!"<<endl;
    return 0;
    
}