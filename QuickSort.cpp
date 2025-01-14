#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &vec,int low,int high){
    int key=vec[high];
    int temp=low-1;
    for(int i=low;i<high;i++){
        if(vec[i]<key){
            temp++;
            int ind=vec[i];
            vec[i]=vec[temp];
            vec[temp]=ind;
        }
    }
    temp++;
    vec[high]=vec[temp];
    vec[temp]=key;
    return temp;
}
void QuickSort(vector<int> &vec,int low,int high){
    if(low<=high){
        int temp=partition(vec,low,high);
        QuickSort(vec,low,temp-1);
        QuickSort(vec,temp+1,high);
    }
}

int main()
{
    
    vector<int> vec={3,6,1,2,5,10,11,-1,8,9};
    QuickSort(vec,0,vec.size()-1);
    for(auto &val:vec)cout<<val<<" ";

    return 0;
}
