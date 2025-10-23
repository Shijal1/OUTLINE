#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(vector<int> &a,vector<int> &b){
    return a[1]<b[1];
}

int activityselection(vector<int> &start,vector<int> &end){
    vector<vector<int>> activitties;
    for(int i=0;i<start.size();i++){
        activitties.push_back({start[i],end[i]});
    }
    sort(activitties.begin(),activitties.end(),compare);
    int count=1;
    int j=0;
    for(int i=1;i<activitties.size();i++){
        if(activitties[i][0]>=activitties[j][1]){
            count++;
            j=i;
        }
    }
    return count;
}

int main(){
   vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> finish = {2, 4, 6, 7, 9, 9};
    cout<<activityselection(start,finish);
    return 0;


}