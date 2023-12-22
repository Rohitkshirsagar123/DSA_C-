#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// // bool isPerfectSquare(int num_sqrt,int n) {
// //    for(int i=2; i*i<=n; i++){
// //         if(num_sqrt % i == 0){
// //             return false;
// //         }
// // 	}
// // 	return true;
// // }

// bool isPerfectSquare(int num_sqrt) {
//     for(int i = 2; i * i <= num_sqrt; i++) {
//         if(num_sqrt % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     cout<<"program divisor 3"<<endl;
//     int n=5;
   
// 		// int num_sqrt=int(sqrt(n));
// 		// if(num_sqrt * num_sqrt ==n){
// 		// 	int val=isPerfectSquare(num_sqrt);
//         //     cout<<val;
           
//         // }
// 		// else{
// 		// 	cout<<false;
// 		// }
//         int x=121;
//         int val=x;
//      int num=0;
//         int m;
//         if(x<0){
//             cout<< false;
//             cout<<"ex";
//         }
//         while(x!=0){
//          m=x % 10;
//          num=num*10 + m;
//          x=x/10;
//         }
//         cout<<num <<" "<<x<<endl;
//         if(num == val){
//             cout<< true;
//         }
//         else{
//             cout<< false;
//         }
        
// }

int main(){
    cout<<"program practise"<<endl;

    // int a;
    // cin>>a;
    // vector<int>arr;
    // for(int i=0;i<=a;i++) {
    //     cin>>i;
    //     arr.push_back(i);
    // }
    // for(int j=0;j<arr.size();j++){
    //     cout<<arr[j];
    // }

    //  string ss("23,4,56");
    //     char ch;
    //     int a, b, c;
    //     istringstream stream(ss);
    //     stream>> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
    //     cout<<a;

        // vector <int>nums={3,0,1};
        // int m_num = *max_element(nums.begin(), nums.end());
		// int t_sum=m_num * (m_num+1)/2;
		//  int list_sum=0;
		//  for(int i=0;i<nums.size();i++){
		// 	 list_sum=list_sum+nums[i];
		//  }
		//  int ms_num=t_sum-list_sum;
		//  cout<< ms_num;

    // vector<int> nums;
    // nums={1,3,4,2,2};
    // int i=0;
    //  int j=arr.size();
    //  while(i<j){
    //    swap(arr[i],arr[j]);
    //    i++;
    //    j--;
    //  }

    //  cout<< arr.size();

    //  cout<<INT_MIN;

    // int smallest = INT_MAX; // Initialize the smallest to a large value
    // int secondSmallest = INT_MAX; // Initialize the second smallest to a large value

    // for (int i = 0; i < nums.size(); i++) {
    //     if (nums[i] < smallest) {
    //         // If the current element is smaller than the smallest, update both smallest and secondSmallest
    //         secondSmallest = smallest;
    //         smallest = nums[i];
    //     } else if (nums[i] < secondSmallest && nums[i] != smallest) {
    //         // If the current element is smaller than the second smallest but not equal to smallest, update secondSmallest
    //         secondSmallest = nums[i];
    //     }
    // }

    // cout<< secondSmallest<<endl;

    // string s="sameer";
    // string s2="33";
    // int ival=stoi(s2);
    // cout<<ival[0]<<endl<<endl;

    // int n=nums.size();
    //     int val;

    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n-i;j++){
    //             if(nums[i]==nums[j]){
    //                 val= nums[i];
    //             }
    //         }
    //     }
    //     cout<< val;





    
    // vector<int> digits;
    // digits={1,2,3};

    // int val=0;
    //     for(int i=0;i<digits.size();i++){
    //         val=val*10+digits[i];

    //     }
    //     cout<<val<<endl;
    //     val=val+1;

    //     vector<int> res;
    //     string sval=to_string(val);
    //     int s=sval.size();
    //     for(int j=0;j<s;j++){
    //         res.push_back(sval[j]);
    //         cout<<sval[j];
    //     }
    //     // cout res;
            



    // check how many time number present in vector number

    vector<int>nums;
    nums={1,2,3,1,1,2,3};
    cout<<nums.size()-1<<endl<<nums[7]<<endl;
    for(int n:nums){
        cout<<n<<endl<<endl;

        
    } 


        
}