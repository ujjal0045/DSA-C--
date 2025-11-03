#include<iostream>
using namespace std;
int main()
{
    int phy,che,bio,math,comp,total;
    cout<<"Input marks of the five subject: ";
    cin>>phy >>che >>bio >>math >>comp;
    total = (phy+che+bio+math+comp) / 5.0;

    if(total <= 100 && total>=90){
        cout<<"Grade A" <<endl <<"Percentage: " <<total <<endl;
    }
    if(total <= 89 && total>=80){
        cout<<"Grade B" <<endl <<"Percentage: " <<total <<endl;
    }
    if(total <= 79 && total>=70){
        cout<<"Grade C" <<endl <<"Percentage: " <<total <<endl;
    }
    if(total <= 69 && total>=60){
        cout<<"Grade D" <<endl <<"Percentage: " <<total <<endl;
    }
    if(total <= 59 && total>=40){
        cout<<"Grade E" <<endl <<"Percentage: " <<total <<endl;
    }
    if(total <= 40 && total>=1){
        cout<<"Fail" <<endl <<"Percentage: " <<total <<endl;
    }
}