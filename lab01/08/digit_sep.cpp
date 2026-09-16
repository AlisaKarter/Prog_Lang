#include <vector>
#include <iostream>

int main(){
	std::vector<int> v = {1, 2, 3, 4, 5, 1'000'000'000};
	for(int x: v){
		std::cout << x << " ";
	}
}