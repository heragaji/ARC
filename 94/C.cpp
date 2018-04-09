#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>
#include<cmath>
using namespace std;

int main(){
    vector<int> x(3);
    for(int i=0;i<=2;i++){
        cin >> x[i];
    }
    sort(x.begin(),x.end());
    if((x[1]-x[0])%2 == 0){
        cout << x[2]-x[1]+ceil((x[1]-x[0])/2) <<endl;
    }
    else{
        cout << x[2]-x[1]+(x[1]+1-x[0])/2+1 <<endl;
    } 
    return 0;
}