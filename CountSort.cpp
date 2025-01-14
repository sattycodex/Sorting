#include<bits/stdc++.h>
using namespace std;

void countSort(vector<int> &vec){
    //applied when difference between minimum and maximum element is low
    int mini = *min_element(vec.begin(), vec.end());
    int maxi = *max_element(vec.begin(), vec.end());
    
    int size=maxi-mini+1;
    
    vector<int> temp(size,0); //storing frequency of each element
    vector<int> pref(size,0); //storing prefix of frequencies to find which position it will occupy
    vector<int> ans(vec.size(),0); // storing result of sorted array
    
    for(auto &val:vec)temp[val-mini]++;
    
    pref[0]=temp[0];
    for(int i=1;i<size;i++)pref[i]=temp[i]+pref[i-1];
    for(auto &val:vec){
        int index=val-mini;
        ans[--pref[index]]=val;
    }
    for(auto &val:ans)cout<<val<<" ";
}

int main()
{
    
    vector<int> vec={3,6,1,2,5,5,2,3,1,6,7,8};
    countSort(vec);
    return 0;
}
