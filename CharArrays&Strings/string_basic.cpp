#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str;
    // cin>>str;
    // cout<<str;

  //  getline(cin, str);
  
  // cout << str<<endl;

  // cout << "length: "<< str.length() << endl;
  // cout << "isEmpty: " << str.empty() << endl;
  // str.push_back('A');
  // cout << str << endl;
  // str.pop_back();
  // cout << str << endl;
  // cout<<str.substr(1,3)<<endl;
  // cout << str << endl;
  
  // string a = "Prabhat";
  // string b = "Prabhat";

  // if(a.compare(b)==0){     // case senstive
  //   cout<<"Same String";
  // }
  // else{
  //   cout<<"Not Same String";
  // }

  // string x = "aabbss";
  // string y = "aabbss";

  // cout<<x.compare(y);

  // string sentense = "Jane vo kaise log the jinake Pyar ko...";
  // string target = "hehe";

  // // cout<<sentense.find(target)<<endl;
  // if(sentense.find(target) == string::npos) {
  //     cout << "Not Found" << endl;
  // }
  
  string str = "Prabhat Kumar";
  string word = "Shah";

  str.replace(8,4, "second");  // here 8th index in str and 4 is next how many words replace
  cout<<str<<endl;

   str.erase(10,2); // erase 10th index to 2nd from 10th means 12th index
   cout<<str;

    return 0;
}