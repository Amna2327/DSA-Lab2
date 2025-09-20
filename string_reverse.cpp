#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"Enter string"<<endl;
    cin>>a;

    char *s=new char[a.size()+1];
    for(int i=0;i<a.size();i++){
        s[i]=a[i];
    }
    s[a.size()]='\0';
    
    cout<<"The reversed string is ";
    for(int i=(a.size()-1);i>=0;i--){
       cout<<s[i];
    }
    delete []s;
    return 0;
}