#include <iostream>
#include <stack>

using namespace std;



int main (int argc, char * const argv[]) {
	stack<double> numbers;
	string input,c;
	double a,b,x;
	int at;
	
	getline(cin, input);
	
	do {
		at = input.find_first_of(" ");
		c = input.substr(0, at);
		if(c == "+" || c == "-" || c == "*" || c == "/"){
			a = numbers.top();
			numbers.pop();
			b = numbers.top();
			numbers.pop();			
			
			if(c == "+") numbers.push(b + a);
			else if (c == "-") numbers.push(b - a);
			else if (c == "*") numbers.push(b * a);
			else if (c == "/") numbers.push(b / a);
		} else {
			x = atof(c.c_str());
			numbers.push(x);
		}
		input = input.substr(at + 1);
	} while(at != input.npos);
	
	cout << numbers.top() << endl;

    return 0;
}
