/*
Input:-
5 2
1 2 3 4 5
Output:-
3 4 5 1 2
*/
#include<iostream>
using namespace std;
int main(){
    // Input
    int n,k;
    cin>>n>>k;
    int a[n];
    k=k%n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    // Finding GCD
    int n1=n,n2=k;
    while(n1!=n2){      
        if(n1>n2)
            n1-=n2;
        else
            n2-=n1;
    }
    //n1 has GCD
    // Solving the question
    for(int i=0;i<n1;i++){
        int temp=a[i];
        int j=i;
        while(1){
            int d=j+k;
            if(d>=n)
                d=d-n;
            if(d==i)
                break;
            a[j]=a[d];
            j=d;
        }
        a[j]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}