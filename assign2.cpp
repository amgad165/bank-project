#include <iostream>

using namespace std;
int trans(){string apply;
int balance=0;

int value;
string another;
for (int i=0;i<10;i++){
        cout<< "do you want to withdraw or deposit"<<"   "<<"(Enter 'w' for withdraw or 'd' for deposit)" <<endl;
cin >>apply;
if (apply=="d"){
        cout<<"Enter how much you want to deposit: ";
cin>>value;
if (value<0){
    i--;
    cout<<"Enter valid Number";
    continue;
}
balance+=value;

}
  else if (apply=="w"){
        cout<<"Enter how much you want to withdraw: ";
cin>>value;
if (value<0){
    i--;
    cout<<"Enter valid Number";
    continue;
}
balance-=value;
}
if (balance<0){continue;}

cout<<"Do you want to do another transaction"<<endl;
cin >>another;
if (another=="yes"){continue;}
else if (another=="no"){break;}

}
return balance;

}
int edit(int x){
string apply;
int balance=x;

int value;
string another;
for (int i=0;i<10;i++){
        cout<< "do you want to withdraw or deposit"<<"   "<<"(Enter 'w' for withdraw or 'd' for deposit)" <<endl;
cin >>apply;
if (apply=="d"){
        cout<<"Enter how much you want to deposit: ";
cin>>value;
if (value<0){
    i--;
    cout<<"Enter valid Number";
    continue;
}
balance+=value;

}
  else if (apply=="w"){
        cout<<"Enter how much you want to withdraw: ";
cin>>value;
if (value<0){
    i--;
    cout<<"Enter valid Number";
    continue;
}
balance-=value;
}
if (balance<0){continue;}

cout<<"Do you want to do another transaction"<<endl;
cin >>another;
if (another=="yes"){continue;}
else if (another=="no"){break;}

}
return balance;
}
struct Account {
string name;
string address;
string city;
int transaction;
}A[20];

int main(){
    int *r;
    string add;
    string str_no, str_name,neighborhood,city;
    for (int i=0;i<=20;i++){
        cout<<"Enter his name:";
        cin>>A[i].name;
        cout<<"Enter his address name:"<<"  "<<"( format: number -street name -neighborhood -city)"<<endl;
        cin>>str_no>> str_name;
        cin>> neighborhood;

        cin>> city;
        A[i].city=city;
        A[i].address=str_no +str_name+ "   "+ neighborhood+"   "+ city;
         A[i].transaction= trans();
         cout<<" balance = "<<A[i].transaction<<endl;
        cout<<"Do you want to add another Customer:";
        cin >>add;
        if (add=="yes") continue;

        else if (add=="no") break;
    }
    while(true){
int choice;
cout<<"Hello in bank management system please enter your choice"<<endl<<"1) To print all names and account balances"<<endl<<"2) To print specific customer account balance"<<endl;
cout<<"3) To edit customer transactions"<<endl<<"4) To show customer with highest balance"<<endl<<"5) To change customer name, transactions, balance, or address"<<endl<<"6) To show how many customers in one city"<<endl;

cin>>choice;
 if (choice==1){
        for (int i=0;i<20;i++){

            cout<<A[i].name<<"   "<<"Balance= "<<A[i].transaction<<endl;
        }
        cout<<"do you want another option"<<endl;
        string ans;
        cin>>ans;
        if (ans=="yes"){
            continue;
        }
    else break;


}

else if (choice==2){
   string name;
cout<<"Write Customer Name "<<endl;
 cin>>name;
 for (int i=0;i<20;i++){
    if (A[i].name==name){
        cout<<name<<"balance= "<<A[i].transaction<<endl;
    }
 }cout<<"do you want another option"<<endl;
        string ans;
        cin>>ans;
        if (ans=="yes"){
            continue;
        }
    else {
 cout<<"no account found ";
 break;}
}
else if (choice==3){
     string name;
cout<<"Write Customer Name "<<endl;
 cin>>name;
 for (int i=0;i<20;i++){
    if (A[i].name==name){
        A[i].transaction=edit(A[i].transaction);
        cout<<"new balance =  "<<A[i].transaction<<endl;


}

}
   cout<<"do you want another option"<<endl;
        string ans;
        cin>>ans;
        if (ans=="yes"){
            continue;
        }
    else break;

}
else if (choice==4){
        int maximum;
        string name1;
        maximum=0;
    for (int i=0;i<20;i++){
        if (A[i].transaction>maximum){
            maximum=A[i].transaction;
            name1=A[i].name;

        }

    }
    cout<<"the customer with highest balance is : " <<name1<<endl<<"his balance =   "<<maximum<<endl;


      cout<<"do you want another option"<<endl;
        string ans;
        cin>>ans;
        if (ans=="yes"){
            continue;
        }
    else break;
}
else if (choice==5){
          string name;
int x;
cout<<"Write Customer Name "<<endl;
 cin>>name;
 for (int i=0;i<20;i++){
    if (A[i].name==name){
    cout<<"What do you want to change ?"<<endl<<"1-Name"<<endl<<"2-transaction"<<endl<<"3-Address"<<endl<<"4-Balance"<<endl;
    cin>>x;
    if (x==1){
          string new_name;
          cout<<"Enter the new name"<<endl;
    cin >>new_name;
    A[i].name=new_name;

    }
 else if (x==2){
        edit(A[i].transaction);
    }

else if (x==3){
       string new_address;
       string str_no1, str_name1,neighborhood1,city1;
       cout<<"Enter your new Address:   "<<endl;
cin>>str_no>> str_name>>neighborhood>>city;
new_address=str_no1+str_name1+"  "+neighborhood1+"   "+city1;
    A[i].address=new_address;
}
else if (x==4){
    int new_balance;
    cout<<"Enter your new Balance";
    cin>>new_balance;
    A[i].transaction=new_balance;

}
else break;
}
}
}
else if (choice==6){string city1;
int count;
count=0;
cout<<"Enter the city :  "<<endl;
    cin>>city1;
        for (int i=0;i<20;i++){
                if (city==A[i].city){
                    count+=1;
                }

        }
cout<<"the number of customer in this city =  "<<count<<endl;
        cout<<"do you want another option? ";
        string ans1;
        cin>>ans1;
        if (ans1=="yes"){
            continue;
        }
    else break;
}
else {
    cout<<"invalid input";
    continue;
}
}

}

