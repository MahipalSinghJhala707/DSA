/*Problem Name: Cover in Water
🔥 Platform: Codeforces
🔥 Level: Easy
🔥 Topics: Array, Loop*/ 

#include <iostream>
using namespace std;

int main(){
    char str[10];
    cout<<"INPUT : ";
    cin.getline(str, 10);
    int c1=0,c2=0;
    for (int i = 0; i < 10; i++)
    {
        if(str[i]=='.'){
            c1++;
            if(str[i+1]=='.' && str[i+2]=='.'){
                cout<<endl<<"2 RS to fill the water"<<endl;
                return 0;
            }
        }
        
    }
    cout<<c1<<" RS to fill the water"<<endl;
    return 0;
}

/*
Ans is zero if all the container is closed.
Ans is 2 if we got any 3 consecutive open container, we can always use magic property of container and get unlimited amount of water.
Ans is equal to total number of open container if we didn't get any three consecutive open container.
*/