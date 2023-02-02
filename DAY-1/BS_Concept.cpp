/*
    Definition of Binary Search : https://www.geeksforgeeks.org/binary-search/
*/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> array, int size, int key){ //Binary Search Function in Naive Method
    int low =0,high = size-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(array[mid] == key)
            return mid;
        else if(array[mid] < key)
            low = mid+1;
        else
            high = mid;
    }
    return -1;
}

int main(){             //Main Function
    int size,x,key;
    vector<int> arr;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>x;
        arr.push_back(x);
    }
    int result = binarySearch(arr,size,key);
    if(result != -1)
        cout<<"Element found at index: "<<result<<endl;
    else    
        cout<<"Element was not found in the array"<<endl;
}