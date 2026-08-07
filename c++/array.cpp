#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int t){
   for(int i =0; i < n; i++){
    if(arr[i] == t){
        return i;
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
    
    int n;
    cout<<"Enter the size of array: ";
cin >> n;


cout << "Enter the elements of the array: ";
vector<int> arr(n);
for(int i = 0; i < n; i++){
    cin>> arr[i];
    cout<<"arr : "<<arr[i]<<endl;
}
    return 0;
}