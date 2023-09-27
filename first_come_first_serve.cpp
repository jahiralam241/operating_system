#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter how many job "<<endl;
    cin>>n;
    int brust[n];
    for(int i=0;i<n;i++){
        cout<<" enter brust time for "<<i+1<<" "<<" "<<endl;
        cin>>brust[i];

    }

    int waiting=0,avg=0;

   for(int i=0;i<n;i++){
    cout<<"waitting time for process "<<i+1<<" ::"<<waiting<<endl;
       avg+=waiting;
       
       waiting+=brust[i];
       

   }
   cout<<avg;

   int total =avg/n;

   cout<<" average waiting time of the process"<<"  :: "<<total<<endl;
   return 0;
   
}