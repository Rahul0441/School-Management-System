#include <iostream>
using namespace std;
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total = 0;
int i,n=0,j;

void enter() {
  

  cout << "How many student you want to enter?? " << endl;
  cin >> n;
  if(total==0){
    total = total + n;
  for (i = 0; i < n; i++) {
    cout << "\nEnter data of student: " << i + 1 << endl<<endl;
    cout<<"Enter name: "<<endl;
    cin>>arr1[i];
    cout<<"Enter rollno: "<<endl;
     cin>>arr2[i];
    cout<<"Enter course: "<<endl;
     cin>>arr3[i];
    cout<<"Enter class: "<<endl;
     cin>>arr4[i];
    cout<<"Enter contact: "<<endl;
     cin>>arr5[i];
  }
    }
  else{
    
  for (i = total; i < total+n; i++) {
    cout << "\nEnter data of student: " << i + 1 << endl<<endl;
    cout<<"Enter name: "<<endl;
    cin>>arr1[i];
    cout<<"Enter roll no.: "<<endl;
     cin>>arr2[i];
    cout<<"Enter course: "<<endl;
     cin>>arr3[i];
    cout<<"Enter class: "<<endl;
     cin>>arr4[i];
    cout<<"Enter contact: "<<endl;
     cin>>arr5[i];
  }
    total = total+n;
    }
}
void show() {
  if(total==0){
    cout<<"No data is entered"<<endl;
  }
  else{
    for (i = 0; i < total; i++) {
    cout<<"Data of student: "<<i+1<<endl<<endl;
    cout<<"Name: "<<arr1[i];
       cout<<"Roll no.: "<<arr2[i];
       cout<<"Course: "<<arr3[i];
       cout<<"Class: "<<arr4[i];
       cout<<"Contact: "<<arr5[i];
  }
    
  }
  
}
void search() {
   if(total==0){
    cout<<"No data is entered"<<endl;
  }
  else{
  string rollno;
  cout<<"Enter the roll no. of the student you want to search: "<<endl;
  cin>>rollno;
  for(int i=0;i<total;i++){
    if(rollno==arr2[i]){
      cout<<"Name "<<arr1[i]<<endl;
      cout<<"Roll no. "<<arr2[i]<<endl;
      cout<<"Course "<<arr3[i]<<endl;
      cout<<"Class "<<arr4[i]<<endl;
      cout<<"Contact "<<arr5[i]<<endl;
      }
  }
}
}
void update(){
 if(total==0){
    cout<<"No data is entered"<<endl;
  }
  else{
  string rollno;
  cout<<"Enter the roll no. of the student you want to search: "<<endl;
  cin>>rollno;
  for(int i=0;i<total;i++){
    if(rollno==arr2[i]){\
      cout<<"Previous data"<<endl;
      cout<<"Name "<<arr1[i]<<endl;
      cout<<"Roll no. "<<arr2[i]<<endl;
      cout<<"Course "<<arr3[i]<<endl;
      cout<<"Class "<<arr4[i]<<endl;
      cout<<"Contact "<<arr5[i]<<endl;

      cout<<"\nEnter new data"<<endl<<endl;
      cout<<"Enter Name: "<<endl;
      cin>>arr1[i];
      cout<<"Roll no. "<<endl;
      cin>>arr2[i];
      cout<<"Course "<<endl;
      cin>>arr3[i];
      cout<<"Class "<<endl;
      cin>>arr4[i];
      cout<<"Contact "<<endl;
      cin>>arr5[i];
      }
  }
}
}


void deleterecord() {
   if(total==0){
    cout<<"No data is entered"<<endl;
  }
  else{
  int a;
  cout<<"Press 1 to delete full record "<<endl;
  cout<<"Press 2 to delete specific record "<<endl;
  cin>>a;
  if(a==1){
    total=0;
    cout<<"All record is deleted."<<endl;
  }
  else if(a==2){
    string rollno;
    cout<<"Enter the rollno which you want tpo delete: "<<endl;
    cin>>rollno;
    for(int i=0;i<total;i++){
      if(rollno == arr2[i]){
        for(j=0;j<total;j++){
          arr1[j]=arr1[j+1];
          arr2[j]=arr2[j+1];
          arr3[j]=arr3[j+1];
          arr4[j]=arr4[j+1];
          arr5[j]=arr5[j+1];
        }
        total--;
        cout<<"Your required record is deleted..."<<endl;
      }
    }
  }
}
}

int main() {
  int value;
  while (true) {
    cout << "Press 1 to enter data" << endl;
    cout << "Press 2 to show data" << endl;
    cout << "Press 3 to search data" << endl;
    cout << "Press 4 to update data" << endl;
    cout << "Press 5 to delete data" << endl;
    cout << "Press 6 to exit" << endl;
    cin >> value;
    switch (value) {
    case 1:
      enter();
      break;
    case 2:
      show();
      break;
    case 3:
      search();
      break;
    case 4:
      update();
      break;
    case 5:
      deleterecord();
      break;
    case 6:
      exit(0);
      break;
    default:
      cout << "Invalid input" << endl;
      break;
    }
  }
}