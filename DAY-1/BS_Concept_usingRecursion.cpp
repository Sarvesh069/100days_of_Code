/*
    Definition of Binary Search using Recrusion: https://www.geeksforgeeks.org/binary-search/
*/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>array, int low, int high, int key){        //Binary Search using Recursion
    while(low<=high){
        int mid = low + (high-low)/2;
        if(array[mid] == key)
            return mid;
        else if(array[mid] < key)
            binarySearch(array,mid+1,high,key);
        else
            binarySearch(array,low,mid,key);
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
    cin>>key;
    int result = binarySearch(arr,0,size-1,key);
    if(result != -1)
        cout<<"Element found at index: "<<result<<endl;
    else    
        cout<<"Element was not found in the array"<<endl;
}