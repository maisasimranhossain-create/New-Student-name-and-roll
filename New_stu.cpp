#include <iostream>
using namespace std;
class student{
	public:
		string name;
		int roll;
};
int main(){
	std::cout<<"Hello Class"<<std::endl;
	student s1;
	s1.name="Simran";
	s1.roll=201;
	std::cout<<"New Student is "<<s1.name<<" with roll number "<<s1.roll<<std::endl;
	return 0;
}