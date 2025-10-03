#include<iostream>
using namespace std;
int main(){
    string str = "Akhil";
    char *ptr=&str[0];
    
    int count = 0;
    while (*ptr != '\0') {
        //*ptr = &str[0];
        count++;
        ptr++;
    }
    cout << "Charcter count in the str:" << count;
}