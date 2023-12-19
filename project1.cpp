#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int sum = 0;
    int average;
    int array[12];
    string month[]={"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
    cout<<"Monthly Expense Calculating App"<<endl;
    cout<<"**********************************"<<endl;
    cout<<endl;
    for(int i=0;i<12;i++){
        cout<<"Expense for "<<month[i]<<" :"<<endl;
        cin>>array[i];
        sum=sum+array[i];
    }
 cout<<"The monthly expense are as follows:"<<endl;
 for(int i=0;i<12;i++){
    cout<<"Expenses for\t"<<month[i]<<"\t"<<array[i]<<endl;
    
     }
     average= sum/12;

 cout<<"**********************************"<<endl;
 cout<<"Total expenses for the household for the year= "<<sum<<endl;
 cout<<"The average expenses for a single month = "<<average<<endl;
 return 0;
}