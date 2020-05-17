#include <bits/stdc++.h>
using namespace std;
int leap_year(int n){
    
    if(n<0){
        return -1;
    }
    if(n%4==0){
        
    }
    else{
        return 0;
    }

     return 0;
}

int main(){
    int n;
    cin>>n;
    if(leap_year(n) == 1) {
        cout<<"It's a Leap Year";
    }
    else if(leap_year(n)==(-1)){
        cout<<"Not a valid Input";
    }
    else{
        cout<<"It's Not a Leap Year";
    }
}
