#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Year {
 public:
 	enum days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
  void Set_days(short Day, char Week, char Month) {
  	day = Day;
  	week = Week;
  	month = Month;
  }
  void show() {
  	cout<<day<<" "<<week<<" "<<month<<endl;
  }
 private:
 	short day;
 	char week;
 	char month;
};
int main (int argc, char *argv[])
{   setlocale(0, "rus");
    printf("Дни недели\n");
    Year One;
    One.Set_days(13,'m','f');
    One.show();
    const int sal = 500;
    int sum = 0;
    cout<<One.Thursday;
    for(int j=0;j<32000;j++){
         cout<<j<<"\t"<<sal<<endl;
         sum = sum + sal;
    }
    cout<<sum<<endl;
    auto a = 365;
    auto b = a + ' ';
    cout<<(char) b<<"\t"<<argv[0]<<"\t"<<argc<<endl;
    vector <string> v;
    v.push_back("Z");
    v.push_back("VVVVV");
    v.push_back("YY");
    v.push_back("WWWW");
    v.push_back("XXX");
    sort(v.begin(),v.end());
    for (int i=0;i<sizeof(v); i++){
        cout<<v[i]<<endl;
    }
	return 0;
}
