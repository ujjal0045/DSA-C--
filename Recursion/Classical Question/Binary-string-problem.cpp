#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void binString(int n,int lastplace,string ans)
{
    if(n == 0){
        cout<<ans<<endl;
        return;
    }
    if(lastplace != 1){
        binString(n-1,0,ans+'0');
        binString(n-1,1,ans+'1');
    } else{
        binString(n-1,0,ans+'0');
    }
}
// Without using lastplace
void binString2(int n,string ans)
{
    if(n == 0){
        cout<<ans<<endl;
        return;
    }
    if(ans.size()-1 != '1'){
        binString(n-1,0,ans+'0');
        binString(n-1,1,ans+'1');
    } else{
        binString(n-1,0,ans+'0');
    }
}

int main(){
    string ans = "";
    binString(5,0,ans);
    printf("\n");
    binString2(3,ans);
    return -1;
}