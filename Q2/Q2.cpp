#include<iostream>  
using namespace std;  
   
int main(){  
    int n=0;  
    int bin[8];  
    cin>>n;  
    if (n<0)  
    {  
        n+=256; //負數則推移至正整數  
    }  
    for (int i = 7; i >= 0; i--)  
    {  
        bin[i]=n%2;  
        n/=2;  
    }  
    for (int i = 0; i < 8; i++)  
    {  
        cout<<bin[i];  
    }  
    cout<<"\n";  
}