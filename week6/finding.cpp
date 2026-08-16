#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int ans=0;
    for(int bit=0;bit<32;bit++){
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]&(1<<bit)){
                count++;
            }
        }
        cout << "bit " << bit << " count " << count << endl;
        if(count%3==1){
            ans=ans|(1<<bit);
        }
    }
    cout<<ans<<endl;
    return 0;
}