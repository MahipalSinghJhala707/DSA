/*Day 1 problem : We are give an array and some value k ,
where we need to print "yes" if sub arrays of size k or less after reversing will sort the original array (you can perform this step as many times you like)
else print "no" */
#include <iostream>
using namespace std;

int main(){
    int array[5] = {10,8,3,20,25};
    int k;
    cin>>k;
    int size = sizeof(array)/sizeof(array[0]);
    int flag = 0;
    for (int i = 0; i < size-1; i++)
    {   
        if(array[i]>array[i+1]){
            flag = 1;
        }
    }
    if(flag==0)
        cout<<"no"<<endl;
    else if(k<=1)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;
    return 0;
}

/*Answer :-
            if the array is already sorted then there will be no sub array by reversing the the original array will get sorted . 
            and for k=2 it will work same as selection sort so for k>1 only there will printed yes */