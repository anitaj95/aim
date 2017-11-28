
#include <iostream>
#include <fstream>


using namespace std;

int main(){
    ofstream outfile("out1.txt");
ifstream infile("in1.txt");
signed long long val=0,a;
infile >> val;
string b;
while(true){
infile >> b;
if(b=="=") {outfile<<val; infile>>val;}
if(b=="==") {outfile<<val; return 0;}
infile >> a;
if(b=="+") val+=a;
else if(b=="-") val-=a;

}

}
