 
//  // Painter's portiion probleam


 
 
//  #include<iostream>
//  #include<vector>
//   using namespace std;
  

//   int ispossible(vector<int>&arr,int n, int m,int maxAllowedTime){
      

//        int  painters =1, time = 0;
//        for(int i=0; i<n; i++) {
//         if(time +arr[i] <=maxAllowedTime){
//          time +=arr[i];
//         } else{
//        painters++;
//         time +=arr[i];
//         }
//        }
//        return painters <=m;
//   }

//   int minTimeToPaint(vector<int>&arr,int n, int m){
//      int sum = 0, maxVal = INT_MIN; 
//      for(int i=0; i<n; i++){
//         sum +=arr[i];
//         maxVal = max(maxVal,arr[i]);

//      }
//      int st = maxVal,end = sum,ans = -1;

//      while(st <=end){
//         int mid = st +(end-st)/2;
//         if(ispossible(arr,n,m,mid)) {
//             ans = mid;
//             end = mid -1;

//         } else {
//             st = mid +1;

//         }
//      }
//   }

//   int  main(){
//    vector<int> arr ={40,30,10,20};
//    int n =4, m =2;

    
       
//   }

#include<iostream>
#include<vector>
#include<climits>  // Include this for INT_MIN

using namespace std;

int ispossible(vector<int>& arr, int n, int m, int maxAllowedTime) {
    int painters = 1, time = 0;
    for (int i = 0; i < n; i++) {
        if (time + arr[i] <= maxAllowedTime) {
            time += arr[i];
        } else {
            painters++;
            time = arr[i]; // Reset time for the new painter
            if (painters > m) return false; // If we exceed the number of painters, return false
        }
    }
    return painters <= m;
}

int minTimeToPaint(vector<int>& arr, int n, int m) {
    int sum = 0, maxVal = INT_MIN;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (ispossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    return ans; // Return the answer (minimum time to paint)
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    int result = minTimeToPaint(arr, n, m);
    cout << "Minimum time to paint: " << result << endl;

    return 0;
}
