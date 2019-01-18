
#include <stdio.h>
#include <iostream>

using namespace std;

class troad
	{
	public:
	float length;
	int width;
	troad(float Length0, int Width0);
	};
	
troad::troad(float Length0, int Width0)
{
	if (Length0 > 0) length = Length0;
		else length = 1;
if (Width0 > 0) width = Width0;
	else width = 1;
}

int main()
{   

	troad road(50.1,4);
std::cout<<"road.width="
<<road.width<<std::endl;
std::cout<<"road.length="
<<road.length<<std::endl;
    road.length = 0;
    road.width = 0;
std::cout<<"road.width="
<<road.width<<std::endl;
std::cout<<"road.length="
<<road.length<<std::endl;

return 0;
}
	
