#include<iostream>
using namespace std;
void analyze_pointer(int *ptr){
   cout<<"The  memory location is "<<ptr<<endl;
   cout<<"The value stored in that memory location is "<<*ptr<<endl;\
   return;
}
int main(){
   int* a=new int(23);
   analyze_pointer(a);
   return 0;
}
