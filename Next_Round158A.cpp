#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,k;
    cin >> n>>k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int positionvalue = arr[k-1]; 
    int count = 0;
   

     for (int m = 0; m < n; m++) {

       if(arr[m]>=positionvalue && arr[m]>0){
        count++;
       }

       
    }

cout<<count;

    return 0;
}