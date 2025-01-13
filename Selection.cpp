#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec={3,5,8,1,2,9,10,11};
    int n=vec.size();
    
    for(int i=0;i<n-1;i++){
        int key=vec[i];
        int pos=i;
        for(int j=i+1;j<n;j++){
            if(vec[j]<key){
                key=vec[j];
                pos=j;
            }
        }
        int temp=vec[i];
        vec[i]=vec[pos];
        vec[pos]=temp;
    }
    
    for(auto &val:vec)cout<<val<<" ";

    return 0;
}
