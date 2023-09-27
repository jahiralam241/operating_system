#include<iostream>
using namespace std;
void sort(int brust[],int process[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(brust[i]>brust[j]){
                int temp=brust[i];
                brust[i]=brust[j];
                brust[j]=temp;

                temp=process[i];
                process[i]=process[j];
                process[j]=temp;

            }
        }
    }
}

void waiting_time(int brust[],int process[],int n){
       int wait=0;
       float avarage_wait=0;
       

          sort(brust,process,n);
          for(int i=0;i<n;i++){
            cout<<" waiting time of process "<<process[i]<<" ::"<<wait<<endl;
            avarage_wait+=wait;
            wait+=brust[i];

          }
          cout<<" average waiting time for all jobs ::"<<avarage_wait/n<<endl;

}

int main(){
    int n;
    cout<<"enter number of process"<<endl;
    cin>>n;
    int brust[n],process[n];
    for(int i=0;i<n;i++){
        cout<<"enter brust time of process "<<i+1<<"  ::"<<endl;
        cin>>brust[i];
        process[i]=i+1;
    }
     waiting_time(brust,process,n);
     return 0;


}