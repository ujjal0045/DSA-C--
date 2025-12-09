#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2 ={1,2,3,4,5};
    vector<int> v3(10,-1);

    cout<<v1.size() <<endl;
    cout<<v2.size() <<endl;
    cout<<v3.size() <<endl;
}