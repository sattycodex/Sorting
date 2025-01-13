#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec={3,5,8,1,2,9,10,11};
    int n=vec.size();
    
    for(int i=1;i<n;i++){
        int key=vec[i];
        int j=i-1;
        while(j>=0 && vec[j]>key){
            vec[j+1]=vec[j];
            vec[j]=key;
            j--;
        }
    }
    
    for(auto &val:vec)cout<<val<<" ";

    return 0;
}
