#include <iostream>
#include <string>
#include <ctime>

using namespace std;



int main()
{

  float BankId;

  srand(time(0));
BankId = rand()%100;

cout << BankId;


cout << "Banka Seciminizi Yapiniz " <<endl;
cout << "1-Yapi Kredi " << endl;
cout << "2-Garanti " << endl;
cout << "3-Ziraat " << endl;
cout << "4-Vakifbank " << endl;
cout << "5-İs Bankasi " << endl;

int secim;
cin >> secim;

switch (secim)
{
  case 1:
  cout << "Yapi Kredi Bankasi" << endl;

    break 
case 2:
  cout << "Garanti Bankasi" << endl;

    break 
 case 3:
  cout << "Ziraat Bankasi" << endl;

    break    
case 4:
  cout << "Vakifbank Bankasi" << endl;

    break 
case 5:
  cout << "İs Bankasi" << endl;

    break 
}





}