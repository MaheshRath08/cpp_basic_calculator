#include <iostream>

using namespace std;

main(){
    char opt;
    float n1, n2, ans;
    cout<<"--------Welcome to calculator--------"<<endl;
    cout<<"_____________________________________________"<<endl;
    cout<<"Enter first number"<<endl;
    cin>>n1;
    cout<<"Enter second number"<<endl;
    cin>>n2;

    cout<<"{  OPTIONS: '+', '-', '*', '/'  }"<<endl;
    cout<<"What function you want to execute:"<<endl;
    cin>>opt;

    switch (opt)
    {
    case '+':
        ans=n1+n2;
        break;

    case '-':
        ans=n1-n2;
        break;
    
    case '*':
        ans=n1*n2;
        break;

    case '/':
        ans=n1/n2;
        break;

    default:
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
        cout<<"options should be identical to the option given above!!";
        cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
        break;
    }

    cout<<"Answer: "<<ans;

    return 0;
}