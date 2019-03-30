#include<iostream>

using namespace std;

int main(){
	int Fizz[40];
	int Buzz[20];
	int FizzBuzz[20];
	
	int f=0;
	int b=0;
	int fb=0;

for(int i=1;i<=100;i++){
if(i%15==0){
	FizzBuzz[fb++]=i;
cout<<"FizzBuzz"<<endl;
}
else if((i%3)==0){
	Fizz[f++]=i;
cout<<"Fizz"<<endl;
}
else if((i%5)==0){
	Buzz[b++]=i;
cout<<"Buzz"<<endl;
}
else{
cout<<i<<endl;
}
}
return 0;
}
