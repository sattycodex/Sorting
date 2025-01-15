#include<bits/stdc++.h>
using namespace std;

void countSort(vector<int> &vec,int expo){
    vector<int> freq(10,0);
    
    for(auto val:vec){
        int pos=((val/expo)%10);
        freq[pos]++;
    }
    for(int i=1;i<freq.size();i++){
        freq[i]+=freq[i-1];
    }
    vector<int> ans(vec.size(),0);
    for(int i=vec.size()-1;i>=0;i--){
        int val=vec[i];
        int pos=((val/expo)%10);
        int actualPos=freq[pos];
        actualPos--;
        ans[actualPos]=val;
        freq[pos]--;
    }
    for(int i=0;i<vec.size();i++){vec[i]=ans[i];}
}

void radixSort(vector<int> &vec){
    int expo=1;
    int maxi=*max_element(vec.begin(),vec.end());
    while(expo<maxi){
        countSort(vec,expo);
        expo=expo*10;
    }
    
}

int main()
{
    vector<int> vec={1122,122,343,2,433,12324,76,875656,343};
    radixSort(vec);
    for(auto val:vec)cout<<val<<" ";

    return 0;
}
