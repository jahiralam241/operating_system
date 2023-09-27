#include<iostream>

using namespace std;
int s=1;
void wait(int &s);

void signal(){

    cout<<" exiting critical section"<<endl;
    s++;
    wait(s);


}
void wait(int &s){

if(s<=0){
    cout<<"critical section is in use"<<endl;
       signal();

}
         cout<<"enter ing into critiacl section"<<endl;
         s--;
}

int main(){

     int ch;

       do{
        cout<<"1 to accesss critical section \n 2 wait 0 for exit ";

        cin>>ch;
        switch(ch){
            case 1:
                wait(s);
               break;
            case 3:
                 signal();
                 break;

                
        }
       } while(ch !=0); 
}


