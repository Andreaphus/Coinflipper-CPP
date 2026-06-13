
#include <iostream>
class coin{
public:	
int engine()
{
int Randnum;
srand(time(0));
Randnum=rand()%2;	
//std::cout<<Randnum;
return Randnum;
}

void result()
{
int check=engine();	

if(check==0)
{
std::cout<<"Heads!"<<std::endl;	
}

if(check==1)
{
std::cout<<"Tails!"<<std::endl;	
}

}	
};
int main()
{
coin c;
c.result();
return 0;
}

