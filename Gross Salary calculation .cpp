#include<iostream>
using namespace std;

float calculateTax(int salary){
float tax;
if(salary<30000){
tax=(5.0/100)*salary;
}
else if(salary>=30000 && salary<=59999){
tax=(10.0/100)*salary;
}
else{
tax=(15.0/100)*salary;
}
return tax;
}
int main(){
int salary;
cout<<"Enter gross Salary"<<endl;
cin>> salary;
float result= calculateTax(salary);
cout<<"Total tax is:"<<result;
return 0;
}