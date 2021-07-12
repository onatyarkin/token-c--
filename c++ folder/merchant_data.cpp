#include<iostream>
#include<fstream>
#include<string>
#include<ctime>

using namespace std;

bool IsLoggedIn()
{

string MerchantUserName, MerchantPassword, un, pw;

cout << "Enter Merchant Username : "; cin >> "MerchantUserName";
cout << "Enter Merchant Password : "; cin >> "MerchantPassword";

/* ifstream read("data\\" + MerchantUserName + ".txt");
getline(read, un);
getline(read,pw); */

if (un == MerchantUserName && pw == MerchantPassword)
{
return true;


}
else
{

return false;    
}
}

int main() {
IsLoggedIn();
/* time_t tt;

struct tm * ti;

time (&tt);

ti=localtime(&tt);

cout << "Registration Time : " << asctime(ti);

return 0; */

}