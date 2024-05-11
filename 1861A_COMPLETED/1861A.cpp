#include<bits/stdc++.h>
int main()
{
	int t;
	std::cin >> t;
	while(t--){
		std::string s;
		std::cin >> s;
		if(s.find("1") < s.find("3"))
			std::cout << 13 << std::endl;
		else
			std::cout << 31 << std::endl;
	}
}