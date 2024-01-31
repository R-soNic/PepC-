#include<bits/stdc++.h>
#include<fstream>  //header file to operate with files 
using namespace std;

int main(){
    ofstream myfile;  // 
    myfile.open("data.txt");  // creates a new file inside the folder
    myfile<<"Created a new file......\n";  // write data inside it
    myfile.close(); //close the file
    // open(data.txt,);
    return 0;
}