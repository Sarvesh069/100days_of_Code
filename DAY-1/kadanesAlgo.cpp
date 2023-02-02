#include<bits/stdc++.h>
using namespace std;

//Brute Force
int kadaneBruteForce(vector<int> arr){
    int max =0;
    for(int i=0;i<arr.size();i++){
        int sum = 0;
        for(int j=i;j<arr.size();j++){
            sum += arr[j];
            if(sum>max)
                max = sum;
        }
    }
    return max;
}

//Kadanes Algorithm is used to find Maximum Contagious Subarray sum
int kadaneAlgorithm(vector<int> arr){
    int sum =0,maxi =arr[0];
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        maxi=max(sum,maxi);
        if(sum<0)
            sum =0;
    }
    return maxi;
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
   int res = kadaneBruteForce(arr);
   cout<<"Brute Force: ";
   cout<<res<<endl;
   res = kadaneAlgorithm(arr);
   cout<<"Using Kadane Algorithm: ";
   cout<<res<<endl;
    return 0;
}