#include<iostream>
#include<vector>
using namespace std;

void sieve(int n){
    int res=(n-1)/2;
    vector<bool> marked(res+1,false);
    for(int i=1;i<=res;i++){
        for(int j=i;(i+j+2*i*j)<=res;i++){
            marked[i+j+2*i*j]=true;
        }
    }
        cout<<2<<" ";
        for(int i=1;i<=res;i++){
            if(!marked[i]){
                cout<<(2*i+1)<<" ";
            }
        }   
}

int main(){
    int n;
    cin>>n;
    sieve(n);
    return 0;
}