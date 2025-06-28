#include<iostream>
using namespace std;

// void solve(int arr[]){
//     cout<<"Size inside solve function: "<<sizeof(arr)<<endl;
//     cout<<"arr: "<<arr<<endl;
//     cout<<"&arr: "<<&arr<<endl;

//     arr[0] = 50;
// }

void update(int* p){
    cout<<"Address stored inside p is: "<<p<<endl;
    cout<<"Address of p is: "<<&p<<endl;
    *p = *p + 10;
}

int main(){
    // int arr[5] = {1,3,5,6,8};
    // cout<<"arr: "<<arr<<endl;
    // cout<<"arr[0]: "<<arr[0]<<endl;
    // cout<<"&arr: "<<&arr<<endl;
    // cout<<"&arr[0]: "<<&arr[0]<<endl;

    // int* p = arr;
    // cout<<"p: "<<p<<endl;
    // cout<<"&p: "<<&p<<endl;
    // cout<<"*p: "<<*p<<endl;
    // cout<<"*arr: "<<*arr<<endl;
    // cout<<"*arr+1: "<<*arr+1<<endl;
    // cout<<"*(arr) + 1: "<<*(arr) + 1<<endl;
    // cout<<"*(arr + 1): "<<*(arr + 1)<<endl;
    // cout<<"arr[1]: "<<arr[1]<<endl;
    // cout<<"*(arr + 2): "<<*(arr + 2)<<endl;
    // cout<<"arr[2]: "<<arr[2]<<endl;
    // cout<<"*(arr + 3): "<<*(arr + 3)<<endl;
    // cout<<"arr[3]: "<<arr[3]<<endl;

    // int i = 0;
    // cout<<"arr[i]: "<<arr[i]<<endl;
    // cout<<"i[arr]: "<<i[arr]<<endl;
    // cout<<"*(arr + i): "<<*(arr + i)<<endl;
    // cout<<"*(i + arr): "<<*(i + arr)<<endl;

    // // arr = arr + 2;
    // int* p = arr;
    // p = p + 2;

    // int arr[10];
    // cout<<"sizeof(arr): "<<sizeof(arr)<<endl;

    // int* p = arr;
    // cout<<"sizeof(p): "<<sizeof(p)<<endl;
    // cout<<"sizeof(*p): "<<sizeof(*p)<<endl;

    // char ch[10] = "Babbar";
    // char* c = ch;
    // cout<<"ch: "<<ch<<endl;
    // cout<<"&ch: "<<&ch<<endl;
    // cout<<"ch[0]: "<<ch[0]<<endl;

    // cout<<"c: "<<c<<endl;
    // cout<<"&c: "<<&c<<endl;
    // cout<<"*c: "<<*c<<endl;

    // char name[9] = "SherBano";
    // char* c = &name[0];
    // cout<<"name: "<<name<<endl;
    // cout<<"&name: "<<&name<<endl;
    // cout<<"*(name + 3): "<<*(name + 3)<<endl;

    // cout<<"c: "<<c<<endl;
    // cout<<"&c: "<<&c<<endl;
    // cout<<"*c: "<<*c<<endl;
    // cout<<"*(c + 3): "<<*(c + 3)<<endl;
    // cout<<"c + 2: "<<c + 2<<endl;
    // cout<<"c + 8: "<<c + 8<<endl;

    // char ch = 'l';
    // char* cptr = &ch;
    // cout<<"cptr: "<<cptr<<endl;

    // char name[10] = "Ankur";
    // cout<<"name: "<<name<<endl;

    // char* c = "Ankur";
    // cout<<"c: "<<c<<endl;

    // int arr[10] = {1,2,3,4};
    // cout<<"size inside main function: "<<sizeof(arr)<<endl;
    // cout<<"arr: "<<arr<<endl;
    // cout<<"&arr: "<<&arr<<endl;

    // // printing array inside main
    // for(int i = 0; i<10;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // solve(arr);

    // cout<<"Again back to the main function"<<endl;
    // for(int i = 0; i<10;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    int a = 5;
    cout<<"Address of a is: "<<&a<<endl;

    int* ptr = &a;
    cout<<"Address stored in ptr is: "<<ptr<<endl;
    cout<<"Address of ptr is: "<<&ptr<<endl;

    update(ptr);
    cout<<"Value of a is: "<<a<<endl;


    


    return 0;
}