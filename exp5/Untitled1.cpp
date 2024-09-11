#include<iostream>
using namespace std;
int main(){
int n,on,rem,sum=0;
cout<<"enter a number:"<<endl;
cin>>n;
n=on;
for(int i=1;i<n;i++){
    rem=on%10;
    sum=sum+rem;
    on=on/10;}
if(n%sum==0){
    cout<<"its harshad num"<<endl;
}
else{
    cout<<"its not harshad num";
}
return 0;
}

