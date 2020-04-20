//
// Author: marvin on 4/19/20.
//

#include "lib.h"
#include "template/stack.h"
#include "template/stack.cpp"


int main() {

    Stack<int> intstack;
    Stack<string> stringstack;
    Stack<string> stringstack2;
    Stack<string> str;

    stringstack2.push("pruba1");
    stringstack2.push("pruba2");
    stringstack2.push("pruba3");
    stringstack2.push("pruba4");
    stringstack2.pop();

    intstack.push(100);
    intstack.print_elements(cout);
    cout<<intstack.top()<<endl;
    stringstack.push("utec");
    cout<<stringstack.top()<<endl;
    stringstack.pop();
    cout<<stringstack2<<endl;
    //asignacion con operador igual.
    str=stringstack2;
    cout<<stringstack.empty()<<endl;
    cout<<str;

    return 0;
}
