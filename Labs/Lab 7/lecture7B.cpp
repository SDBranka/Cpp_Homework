/*
   File output
      -library <fstream>
      -define
         -"ofstream fout;"
      -connect the stream to the output file
          -"fout.open("output.txt");"
*/


#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream out_stream;
	out_stream.open("output.txt");
	out_stream<< "This is hello from COSC246\n";
	out_stream.close();  //flushes buffers
	
	return 0;
}
