// REG NO: CT101/ G/26620/25

 // c++ code to calculate sales
 #include<iostream>
using namespace std;
  int main(){
  // variables declaration 
      string customerName,phoneModel;
       int quantity;
      float price,totalSales;
     
      cout<<"Enter customer name, phone model purchased, quantity and price per phone"<<endl;
      cin>> customerName>> phoneModel>> quantity >> price;
    // formula for sales
     totalSales= quantity *price;
     
     // Receipt of sales
     cout<<"____________________________________"<<endl;
     cout<<"+++++++++++++++++++++++++++++±++++++++"<<endl;
     cout<<"customer name:"<<customerName<<endl;
     cout<<"phone model:"<<phoneModel<<endl;
     cout<<"Quantity purchased:"<<quantity<<endl;
     cout<<"price per phone:"<<price<<endl;
     cout<<"Total amount:"<<totalSales<<endl;
     
     cout<<"served by: IBRAHIMS"<<endl;
     cout<<"Phone:0112217156"<<endl;
     cout<<"THANK YOU FOR SERVING WITH US"<<endl;
     
     return 0;
     }
    
    