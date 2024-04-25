#include <iostream>
using namespace std;
int main(){

int num;
cout<<"Enter a number to find Fibonacci series upto it";
cin>>num;
int a=0, b=1, c;
cout<<a<<" "<<b;
for (int i=1; i<num; i++){
    c=a+b;
    if(c>num){
        break;
    }
    cout<<" " <<c;
    a=b;
    b=c;
    cout<<" ";
   
}


}


//     int num;
//     cout<<"Enter a Number to check whether its prime or Not";
//     cin>>num;

//     bool isprime=true;

//     for (int i=2; i<=num; i++){
//         if(num==0 || num==1 ){
//             cout<<"Exceptional cases";}
//         else if(num%i==0){
//             cout<<"This aint a prime num";
//             }
//         else{
//             cout<<"Prime";}
        
//         }

//     }


//   int num;
//   cout<<"Enter the value to find its factorial ";
//   cin>>num;
//     int fac=1;
//  for (int i=1; i<=num;i++){
//     fac+=i;
//   }
//   cout<<fac;
// }

//   int num;
//   cout<<"Enter any number to find whether its even or odd";
//   cin>>num;

//   if(num%2==0){
//     cout<<"Number is Even"<<endl;
    
// }
// else {
// cout<<"Odd";

// }
//   int table;
//  cout<<"Enter the value to find its Table ";
//   cin>>table;
//     for(int i=0; i<=10; i++){

//         cout<<table<<"x"<<i<<"="<<table*i<<endl;

//     }

