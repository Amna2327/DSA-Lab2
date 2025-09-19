#include<iostream>
using namespace std;
void analyze_pointer(int *ptr){
   cout<<"The  memory location is "<<ptr<<endl;
   cout<<"The value stored in that memory location is "<<*ptr<<endl;\
   return;
}
int main(){
   int a=23;
   int *ptr=&a;
   analyze_pointer(ptr);
   return 0;
}
