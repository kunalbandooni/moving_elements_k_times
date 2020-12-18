/*
Time Complexity:- O(n)
Space Complexity:- O(1)
Input:-
5 2
1 2 3 4 5
Output:-
3 4 5 1 2
*/
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    k=k%n;
    for(int i=0;i<k/2;i++)
        swap(a[i],a[k-i-1]);
    for(int i=k;i<(n+k)/2;i++)  
        swap(a[i],a[n+k-i-1]);
    for(int i=0;i<n/2;i++)
        swap(a[i],a[n-i-1]);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
