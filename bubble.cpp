#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec={3,5,8,1,2,9,10,11};
    int n=vec.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(vec[j]>vec[j+1]){
                int temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
            }
        }
    }
    
    for(auto &val:vec)cout<<val<<" ";

    return 0;
}
