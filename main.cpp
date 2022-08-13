#include <iostream>

using namespace std;
int bs(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key){
            e=mid-1;
        }
        else
        s=mid+1;
    }
    return -1;
}
int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int ans=bs(arr,n,9);
    cout<<ans;

    return 0;
}

