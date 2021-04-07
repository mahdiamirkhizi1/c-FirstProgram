#include <iostream>

using namespace std;

int main()
{
    int allArr[5]={0,0,0,0,0};
    int temp=1;
    int evenAdd=0;
    for(int i=0;i<5;i++){
        cout << "write"<<i+1<<" : ";
        cin >> allArr[i];
        if(allArr[i] % 2 == 0){
            // allArr[i] =OddArr[i];
            temp=temp*allArr[i];
            cout<<allArr[i];
            // cout<<"temp"<<temp;
            // for(int j=0;j < *(&OddArr + 1) - OddArr;i++){
            //     temp=temp*OddArr[j];
            //     cout <<  OddArr[j] ;
            // }
            
        }
        else{
            evenAdd=evenAdd+allArr[i];
            cout<<allArr[i];
        }
    }
    cout<<"temp => "<<temp;
    cout<<"even => "<<evenAdd;

    return 0;
}
