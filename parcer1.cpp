#include <iostream>
#include <cstdlib>
using namespace std;
 
 int main()
 {
    int a,b,r;
    char op1, op2;
    cin >> a;
    cin >> op1;
     if((op1=='>')||(op1=='<')){
        cin >> op2;
        cin >> b; 
    } else {
        cin >> b;
    }
    if(op1 == '+'){
        r=a+b;
    }
    else if(op1 == '-'){
        r=a-b;
    }
    else if(op1 == '*'){
        r=a*b;
    }
    else if(op1 == '/'){
        if(b == 0){
		cout << "wrong operation";
		return -1;
		 }
        else r=a/b;
    }
    else if((op1 == '<')&&(op2 == '<')){
        r=a<<b;
    }
    else if((op1 == '>')&&(op2 == '>')){
        r=a>>b;
    }
    else if(op1 == '&'){
        r=a&b;
    }
    else if(op1 == '|'){
        r=a|b;
    }
    else if(op1 == '^'){
        r=a^b;
    }
	else if (op1 == '%') {
		r = a%b;
	}
    else {
        cout << "wrong operation";
        return -1;
    }
    cout <<"result: " << r << endl;
    system("pause");
    //cin.get();
    return 0;
 }
