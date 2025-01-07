#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
        int n;
        cin >> n;

	if(n<0){
		cout << "podano wartosc ujemna" <<endl;
		exit(0);
	} else {
		cout << n << endl;
		cout << fibonacci(n) << endl;
	}

        return 0;
}

