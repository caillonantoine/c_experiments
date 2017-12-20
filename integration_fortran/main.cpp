#include <iostream>
#include "jackaudioio.hpp"
#include <string>

using std::cout;
using std::cin;
using std::endl;

class Test: public JackCpp::AudioIO {
	public:
		virtual int audioCallback(jack_nframes_t nframes,
					audioBufVector inBufs,
					audioBufVector outBufs){
			for(int i=0; i<2; i++){
				for(int j=0; j<nframes; j++){
					outBufs[i][j] = inBufs[i][j];	
				}
			}
			return 0;
		}
		Test():
			JackCpp::AudioIO("first_test",2,2){
		}

};

int main(){
	Test * t = new Test;
	t->start();
	cout << "Engine started" << endl;
	cout << "Send q to close.";
	std::string key;
	cin >> key;
	t->close();
	delete t;
	return 0;
}
