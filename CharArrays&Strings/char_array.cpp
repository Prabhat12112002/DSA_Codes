#include<iostream>
#include<string.h>
using namespace std;

int getLength(char arr[]){
    int length = 0;
    int i = 0;
    while(arr[i] != '\0'){
        length++;
        i++;
    }
    return length;
}
void reverseCharArray(char arr[]){
    int i = 0;
    int n = getLength(arr);
    int j = n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void replaceSpace(char sentence[]){
    int i = 0;
    int n = strlen(sentence);
    while(i<n){
        if(sentence[i] == ' '){
            sentence[i] = '@';
        }
        i++;
    }

}

bool checkPalindrome(char arr[]){
    int i = 0;
    int n = strlen(arr);
    int j = n-1;
    while(i<=j){
        if(arr[i] != arr[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

void ConvertIntoUpper_case(char arr[]){
    int i = 0;
    int n = strlen(arr);
    while(i<n){
        if(arr[i]<'a'){
            i++;
        }
        else{
            arr[i] = arr[i] + 'A' - 'a';
            i++;
        }
    }

}

int main(){
    // char ch1[10] = {64,65,66,97,98,99,5,1};
    // for(int i=0; i<8; i++)
    // {
    //     cout<<ch1[i]<<" ";
    // }

    // char name[20];
    // char middle[20];
    // char surname[20];
    // cout<<"Enter your name: ";
    // cin>>name>>middle>>surname;
    
    // cout<<"My name is: "<<name<<" "<<middle<<" "<<surname;

    // char ch[0] = 'a'; /* #not possible of array zero */

    // char ch1[1] = {'b'};      // #ch1[0] will print b☺. becaues this(☺) show required space for '\0'  
    // char ch2[2] ={'c','\0'};  // #'\0'--> this is called *string terminator*.
    // char ch3[3] ={'d', 'e'};  // #one extra space in char array is for '\0'.
    // cout<<ch1<<ch2<<ch3;

    // char arr[2];
    // cin>>arr;
    // cout<<arr;  
    /* cin treats arr as a C-style string and will keep reading characters 
    until it encounters a whitespace (or newline). */

    // char arr[50];
    // cin>>arr;

    // for(int i=0; i<10; i++){
    //     cout<<"index: "<<i<<",  value: "<<arr[i]<<endl;
    // }

    // int value = (int)arr[6];
    // cout<<"Value is: "<<value;

    // char arr[60];
    // // cin>>arr;
    // cin.getline(arr, 50);
    // cout<<arr;


    // char arr[60];
    // cin>>arr;
    // // cin.getline(arr, 50);  // space will also be count as length
    // cout<<"Length is: "<<strlen(arr)<<endl;
    // cout<<"Length is->: "<<getLength(arr)<<endl;

    // cout<<"Initially: "<<arr<<endl;
    // reverseCharArray(arr);
    // cout<<"After reverse process: "<<arr;

    // char sentence[100];
    // cin.getline(sentence, 100);
    // replaceSpace(sentence);
    // cout<<"Printing Sentence: "<<" "<<sentence;

    // char arr[50] = "NitiN";
    // cout<<"Check Palindrome: "<<checkPalindrome(arr);  // it will be case sensitive.

    char arr[50] = "ChaloAjChalteHainHum";
    ConvertIntoUpper_case(arr);
    cout<<arr;
    


    return 0;
}