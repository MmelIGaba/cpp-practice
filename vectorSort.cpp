#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> res;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        res.push_back(temp); 
    }
    sort(res.begin(), res.end());
    
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<< " ";
    }
    return 0;
}

