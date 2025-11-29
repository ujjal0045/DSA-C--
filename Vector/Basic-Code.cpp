#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(1432);
    v.push_back(2);
    v.push_back(3023);

    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}
