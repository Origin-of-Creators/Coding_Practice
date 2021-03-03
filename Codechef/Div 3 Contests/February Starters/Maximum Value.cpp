#include<bits/stdc++.h>
using namespace std;
int main(){
    long t ;
    cin>>t;
 
            while (t-- > 0) {
                int n;
                cin>>n;
                long arr[n];
                long a;
                for (int i = 0; i < n; i++) {
                    cin>>a;
                    arr[i] = a;
                }

                sort(arr,arr+n);

                long a1 = arr[0];
                long b1 = arr[1];
                long b2 = arr[n - 2];
                long a2 = arr[n - 1];
                long sum1;
                long sum2;

                sum1 = a1 * b1 + max(a1 - b1, b1 - a1);
                sum2 = a2 * b2 + max(b2 - a2, a2 - b2);

                cout<<(max(sum1, sum2))<<'\n';

        
        
    }
}
