#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    char theStr[] = "1234��ӡ����";
    cout<<"str length: "<<strlen(theStr)<<endl;
    cout<<theStr;
    
    return 0;
}
