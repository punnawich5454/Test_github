#include <iostream>
using namespace std;

int main(){
    string message;

    int upper = 0,lower = 0,space = 0,special = 0,number = 0;
    cout << "Enter message: ";
    getline(cin,message);


    for (int i = 0; i < message.length(); i++){
        char c = message[i];

        if (c >= 'A' && c <= 'Z'){
            upper++;
        
        }else if (c >= 'a' && c <= 'z'){
            lower++;
        }else if (c >= '0' && c <= '9'){
            number++;
        }else if (c == ' '){
            space++;

        }else{
            special++;
        }
    }
    cout << "Your message has " << upper << " upper characters\n";
    cout << "Your message has " << lower << " lower characters\n";
    cout << "Your message has " << number << " number characters\n";
    cout << "Your message has " << space << " space characters\n";
    cout << "Your message has " << special << " special characters\n";
    return 0;
}