#include <iostream>
#include <cmath>
using namespace std;
int num, n, nDigits = 0, sumOfDigits = 0, modNum,sigDigs,digit,OddDigits = 0;
int main()
{
  cout<<"Enter an interger -> ";
  cin>>num;
  if(num < 0)
    cout<<"The interger must be non-negative."<<endl;
  else
    {
      n = num;
      modNum = num;
      while(n != 0)
        {
          n = n / 10;
          nDigits++;
        }
      cout<<num<<" = ";
      for(int i = 0; i <= nDigits; i++)
        {
          sigDigs = pow(10,(nDigits-i));
          digit = modNum / sigDigs;
          if(digit % 2 != 0)
          OddDigits++;
          sumOfDigits = (sumOfDigits + digit);
          modNum = modNum % sigDigs;
          if(digit !=0 )
          {
            if(i != nDigits)
            cout<<digit<<" x 10^"<<nDigits-i<<" + ";
            else
            cout<<digit;
          }
        }
      cout<<endl;
      cout<<"sumOfDigits("<<num<<") = "<<sumOfDigits<<endl;
      cout<<"#OddDigits("<<num<<") = "<<OddDigits<<endl;
    }
  return 0;
}
