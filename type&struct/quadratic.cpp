#include <string>
#include <iostream>
#include <cmath> //gives us pow and sqrt!

using std::string; using std::cout;
using std::cin; using std::pow;
using std::sqrt; using std::endl;

//want: a function named quadratic that will take in 3 doubles and return
//a combination of: does a solution exist, and if so, what is it?
	//get radical, test if negative, return indicating no roots
	// radical = b^2 - 4ac
	
	//otherwise get roots and return
	// root1 = (-b + sqrt(radical)) divided by 2a
	// root2 = (-b - sqrt(radical)) divided by 2a

/* My Code Here */
std::pair<bool, std::pair<double, double> > quadratic(double a, double b, double c){
	//get radical, test if negative, return false if so
	double radical = pow(b, 2) - (4*a*c);

	if(radical < 0){
		return std::make_pair(false, std::make_pair(-1, -1));
	} else {
		double root1 = ( -1*b + sqrt(radical) ) / (2*a);
		double root2 = ( -1*b - sqrt(radical) ) / (2*a);
	
		return std::make_pair(true, std::make_pair(root1, root2));
	}
}

int main() {
	//get 3 doubles (ax^2 + bx + c)
	double a, b, c;
	cout << "Give me 3 coefficients: " << endl;
	cin >> a >> b >> c;
	// 利用auto make code clear!
	/* Don't overuse auto, but use it to reduce long type names */
	auto res = quadratic(a, b, c); // auto [found, solutions] = quadratic(a, b, c);
	bool exists = res.first;
	auto roots = res.second;

	//print accordingly
	if (exists) {
		double root1 = roots.first;
		double root2 = roots.second;
		// auto [x1, x2] = solutions;
		cout << "Solutions are: " << root1 << " " << root2 << endl;
	} else {
		cout << "No solutions exist!" << endl;
	}

	return 0;
}

// Test: x^2 + 5x + 6 = 0, roots = -3, -2

// To run: first compile code --> make quadratic, 
// then run the compiled code --> ./quadratic