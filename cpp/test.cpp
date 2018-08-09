#include <iostream>

int memo[100];

int fib(int n){
	if (n == 0){
		return 0;
	}
	if (n == 1 or n == 2){
		return 1;
	}
	if (memo[n] != 0 ){
		return memo[n];
	}

	memo[n] = fib(n-1) + fib(n-2);
	return memo[n];
}

void fill(){
	memo[0] = 1;
	memo[1] = 1;
	for (int i=2; i<100; i++){
		memo[i] = 0;
	}
}

int main(int argc, char const *argv[])
{
	fill();

	int x;
	std::cout<<"\nPick a number to fib-ify \n";
	std::cin>>x;
	int output = fib(x);
	std::cout<<"\n"<<x<<" fib-ified is\n"<<output<<"\n\n";

}