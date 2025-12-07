#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter number of tickets sold today:";
    cin>>N;
    float price;
    float totalRevenue = 0;
    int premiumCount = 0;
    for(int i=1 ;i<=N;i++){
        cout<<"Enter price of ticket"<<i<<":";
        cin>>price;
        totalRevenue +=price;
        if(price >400){
            premiumCount++;
        }
    }
    cout<<"\nTotal Revenue ="<<totalRevenue <<endl;
    cout<<"Premium Tickets(price >400)="<<premiumCount<<endl;
    return 0;
}