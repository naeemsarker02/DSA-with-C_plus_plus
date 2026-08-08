#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int t)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            return i;
        }
    }
    return -1;
}

int bs(vector<int>& arr, int target) {
    int l = 0;
    int r = arr.size()-1;

    while(l<=r){
        int m = (l+r)/2;

        if(target == arr[m]){
            return m;
    }else if(target < arr[m]){
        r = m-1;
    }else{
        l = m+1;
    }
}
    return -1;
}
int main()
{
    // int arr[] = {1, 2, 3 , 4 , 5};
    // int n= sizeof(arr);
    // cout<<"size of array is: "<<n<<endl;

    // int n;
    // cin >> n;
    // int arr[n];
    // // Take input
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
    // // Print array
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }

    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }
    // int total = 0;
    // for(int i =  0; i<n; i++){

    //     total += arr[i];
    // }
    // cout<<"total is: "<<total<<endl;

    // int arr[5] = {1, 2, 3, -5, 5};
    // int smallest = arr[0];
    // for(int i = 0; i < 5; i++){
    //     if(arr[i] < smallest){
    //         smallest = arr[i];
    //     }
    // }
    // cout<<"smallest element is: "<<smallest<<endl;

    // int arr[5]= {2, 4, 88, -100, 5};
    // int largest = arr[0];
    // for(int i = 0; i<5; i++){
    //     if(arr[i] > largest){
    //         largest = arr[i];
    //     }
    // }
    // cout<<" largest : "<<largest<<endl;

    // int n = 5;
    // int arr[n] = {1, 2, 3, 4, 5};
    // int t = 4;
    // cout<<linearSearch(arr, n, t);

    // int n =5;
    // int arr[n]= {2, 4, 88, -100, 5};
    // int l = 0;
    // int r = n-1;

    // while(l<r){
    //     swap(arr[l], arr[r]);
    //     l++;
    //     r--;
    // }

    // while(l<r){
    //     int temp = arr[l];
    //     arr[l] = arr[r];
    //     arr[r] = temp;
    //     l++;
    //     r--;
    // }

    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int n;
    // cout << "Enter the size of array: ";
    // cin >> n;

    // cout << "Enter the elements of the array: ";
    // vector<int> arr(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    //     cout << "arr : " << arr[i] << endl;
    // }

    // vector<int> arr = {1, 2, 3, 4, 5};
    // int n = arr.size();
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << "size of arr: " << arr.size() << " val: ";
    // for (int val : arr)
    // { // for each loop
    //     cout << val << " ";
    // }
    // cout << endl;
    // int n = arr.size();
    // for(int start = 0; start < n; start++){
    //     for(int end = start; end<n; end++){
    //         for(int i = start; i<= end; i++){
    //             cout<<arr[i]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // int start = 1;
    // int end = 3;
    // int sum = 0;
    // for(int i = start; i <= end; i++)
    // {
    //     sum += arr[i];
    // }
    // cout << "Sum of elements from index " << start << " to " << end << " is: " << sum << endl;

    // string s = "hello";
    // int count = 0;
    // int n = s.length();
    // for(int i = 0; i < n; i++){
    //     if(s[i] == 'l'){
    //         count++;
    //     }
    // }
    // cout << "Count of 'l' in the string is: " << count << endl;

    // reverse(s.begin(), s.end());
    // cout << "Reversed string: " << s << endl;

    // int l = 0; 
    // int r = s.length()-1;

    // while(l<r){
    //     swap(s[l], s[r]);
    //     l++;
    //     r--;
    // }
    // cout << "Reversed string: " << s << endl;

    // int n = 5;
    // int factorial = 1;
    // for(int i=1; i<=n; i++){
    //     factorial *= i;
    // }
    // cout << factorial << endl;

    // int l = INT_MIN;
    // int S = INT_MIN;

    // for(int x : arr){
    //     if(x>l){
    //         S = l;
    //         l = x;
    //     }else if( x > S && x != l){
    //         S = x;
    //     }
    // }
    // cout << "Largest: " << l << ", Second Largest: " << S << endl;
    
//     vector<int> arr = {1,2, 2, 3, 1, 4};
//     // unordered_set<int> s;

// for (int x : arr) {
//     arr.push_back(x);
// }

// for (int x : arr) {
//     cout << x << " ";
// }
//     return 0;
// }

    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 7;
    
    
    cout<<bs(arr, target);

}