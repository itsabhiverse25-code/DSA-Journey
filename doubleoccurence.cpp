#include <bits/stdc++.h> 
using namespace std; 
int  Search(vector<int>num,int size,int targ){ 
         int count =0; 
    for(int i=0;i<size;i++){ 
        if(num[i]==targ){ 
           count++; 
           if(count==2){ 
               return i; 
           } 
        } 
    } 
       return -1; 
} 
     
     
 
 
 
int main(){ 
vector<int>num; 
     cout<<"Please enter Numbers you want to enter: "<<endl; 
     int a; 
    cin>>a; 
    cout<<"Enter Target"<<endl; 
    int targ; 
    cin>>targ; 
    for(int i=0;i<a;i++){ 
        cout<<"Enter your number: "<<endl; 
    int b; 
        cin>>b; 
        num.push_back(b); 
    } 
       int ans= Search(num,a,targ); 
       cout<<ans; 
    return 0; 
}  
