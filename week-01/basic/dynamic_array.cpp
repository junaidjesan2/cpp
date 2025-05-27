#include <bits/stdc++.h>
using namespace std;

int* dy_ar(){
    int* x=new int[5];
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    return x;
}
int main()  
{
    int* a=dy_ar();
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}