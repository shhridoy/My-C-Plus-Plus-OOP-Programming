#include<iostream>
using namespace std;

class String{
    void concat(int NewLen);
    int maxlen, length;
    char *str;
public:
    int Getlen();
    char *GetString();
    void ShowString();
    void CCat(String &o);       //overloaded CCat
    void CCat(char *s);         //overloaded CCat
    String (const char *s);     //overloaded constructor
    String (int len=127);       //overloaded constructor
    virtual ~String();          //virtual destructor
};

String :: String (const char *s)
{
    int len = 0;
    while(*(s + len)){
        len++;
    }
    str = new char [len + 1];
    for(int i=0; i<len; i++){
        *(str + i) = *s++;
    }
    *(str + len) = NULL;
    length = maxlen = len;
}

//---------- Overloaded String --------------
String :: String(int len)
{
    str = new char [len + 1];
    *str = NULL;
    length = 0;
    maxlen = len;
}

//---------- concat() --------------
void String :: concat (int NewLen)
{
    char *tstr = new char [NewLen + 1];
    int i = 0;
    while(str[i]){
        tstr[i] = str[i++];
    }
    tstr[i] = NULL;
    delete [] str;
    str = tstr;
    maxlen = NewLen;
}

//---------- Overloaded CCat() ----------------
void String :: CCat(char *s)
{
    int len=0;
    while(*(s + len))
        len++;
    if((length + len) >= maxlen){
        concat(length + len);
    }
    while(*s){
        str[length++] = *s++;
    }
    str[length] = NULL;
}

//----------- Overloaded CCat() --------------
void String :: CCat(String &o)
{
    if((length + o.Getlen()) >= maxlen){
        concat(length + o.Getlen());
    }
    char *s = o.GetString();
    while(*s){
        str[length++] = *s++;
    }
    str[length] = NULL;
}

//----------- ShowString() --------------
void String :: ShowString()
{
    if(length == 0){
        cout<< endl << "No string in this Object." <<endl;
    }
    else{
        cout<< endl << str << endl;
        cout<< "String Length: " << length <<endl;
        cout<< "Maximum Capacity: " << maxlen <<endl;
    }
}

//----------- GetString() ---------------
char *String :: GetString()
{
    return str;
}

//------------ Getlen() ---------------
int String :: Getlen()
{
    return length;
}

//------------ destructor --------------
String :: ~String()
{
    delete[] str;
}
/////////////////////////////////////////////////
// ------------------ main() starts -----------------
int main(void)
{
    String a, b(30), c("Welcome to C++ in Bangla.");

    cout<< "\n In Object 'a' ";
    a.ShowString();

    cout<< "\n In Object 'b' ";
    b.ShowString();

    cout<< "\n In Object 'c' ";
    c.ShowString();

    a.CCat("Hello");
    a.CCat("World.");
    cout<< "\n In Object 'a' ";
    a.ShowString();

    b.CCat(a);
    cout<< "\n In Object 'b' ";
    b.ShowString();

    a.CCat(c);
    cout<< "\n In Object 'a' ";
    a.ShowString();

    cout<< "\n In Object 'c' ";
    c.ShowString();

    b.CCat(a);
    cout<< "\n In Object 'b' ";
    b.ShowString();

    b.CCat("\nGood Luck...");
    cout<< "\n In Object 'b' ";
    b.ShowString();
}
