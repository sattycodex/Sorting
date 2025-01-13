#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> &left,vector<int> &right){
    int i=0;
    int j=0;
    vector<int> mergeVector;
    while(i<left.size() && j<right.size()){
        if(left[i]<=right[j])mergeVector.push_back(left[i++]);
        else mergeVector.push_back(right[j++]);
    }
    while(i<left.size()){
        mergeVector.push_back(left[i++]);
    }
    while(j<right.size()){
        mergeVector.push_back(right[j++]);
    }
    return mergeVector;
    
}
vector<int> mergeSort(vector<int> &vec,int low,int high){
    if(low==high){
        vector<int> temp;
        temp.push_back(vec[low]);
        return temp;
    }
    int mid=low+(high-low)/2;
    vector<int> left=mergeSort(vec,low,mid);
    vector<int> right=mergeSort(vec,mid+1,high);
    return merge(left,right);
}

int main()
{
    vector<int> vec={3,5,-8,1,2,9,-10,11};
    int n=vec.size();
    vector<int> sortedVector=mergeSort(vec,0,n-1);
    for(auto &val:sortedVector)cout<<val<<" ";

    return 0;
}
