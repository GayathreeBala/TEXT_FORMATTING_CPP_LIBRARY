#include<iostream>
#include "color.h"
#include "formatting.h"
using namespace std;
using namespace text_format;
int main(){
string text="HELLO WORLD";
cout<<applyFormat(text,RED)<<endl;
cout<<applyFormat(text,BOLD)<<endl;
cout<<chainFormat(text,BOLD,RED,UNDERLINE)<<endl;
}