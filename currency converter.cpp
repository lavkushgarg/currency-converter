#include<iostream>
using namespace std;
int
main ()
{
  char startvalue;
  float converter (void);
  char selectagain;
start:
  cout <<
    "                                         *************** WELCOME TO CURRENCY CONVERTER APPLICATION ***************"
    << endl << endl << endl;
  cout <<
    "                                         ******************** PLEASE FOLLOW THE INSTRUCTION ********************"
    << endl << endl << endl;
  cout << " You have currencies dollar,rupees,euro,pound." << endl << endl;
  cout <<
    " You can type a,b,c,d respectively for currencies dollar,rupees,euro,pound."
    << endl << endl;
  cout << " Enter currency1 which you ant to convert." << endl << endl;
  cout << " Enter value for currency1" << endl << endl;
  cout << " Enter currency2 in which you want to convert currency1." << endl
    << endl;
  cout << " (a) dollar (b) rupees (c) euro (d) pound" << endl << endl;
  cout << " Please press s to start" << endl << endl;
selectchoice:
  cin >> startvalue;
  if (startvalue == 's' || startvalue == 'S')
    {
      float finalvalue = converter ();
      cout << "Result is " << finalvalue << endl;
    typeagain:
      cout << "Do you want to use the application again ? yes or no" << endl;
      cin >> selectagain;
      if (selectagain == 'y' || selectagain == 'Y')
	{
	  goto start;
	}
      else if (selectagain == 'n' || selectagain == 'N')
	{
	  cout << "Thank you for using our application !" << endl;
	}
      else
	{
	  cout << "you have entered wrong value , please try again" << endl;
	  goto typeagain;

	}

    }
  else
    {
      cout << " You have entered wrong value,please type s" << endl;
      goto selectchoice;
    }

}

float
converter ()
{
  char currname1;
  char currname2;
  float currency1;
  float currency2;
currlevel:
  cout << "Enter currency1 name." << endl;
  cin >> currname1;
  cout << "Enter currency1 value." << endl;
  cin >> currency1;
  switch (currname1)
    {
    case 'a':
    currlevel1:
      cout << "Enter currency2 name" << endl;
      cin >> currname2;
      if (currname2 == 'a' || currname2 == 'A')
	{
	  currency2 = currency1 * 1;
	}
      else if (currname2 == 'b' || currname2 == 'B')
	{
	  currency2 = currency1 * 73.84;
	}
      else if (currname2 == 'c' || currname2 == 'C')
	{
	  currency2 = currency1 * 0.93;
	}
      else if (currname2 == 'd' || currname2 == 'D')
	{
	  currency2 = currency1 * 0.81;
	}
      else
	{
	  cout << "You have entered wrong value,please type again" << endl;
	  goto currlevel1;
	}
      break;
    case 'b':
    currlevel2:
      cout << "Enter currency2 name" << endl;
      cin >> currname2;
      if (currname2 == 'a' || currname2 == 'A')
	{
	  currency2 = currency1 * 0.01;
	}
      else if (currname2 == 'b' || currname2 == 'B')
	{
	  currency2 = currency1 * 1;
	}
      else if (currname2 == 'c' || currname2 == 'C')
	{
	  currency2 = currency1 * 0.01;
	}
      else if (currname2 == 'd' || currname2 == 'D')
	{
	  currency2 = currency1 * 0.009;
	}
      else
	{
	  cout << "You have entered wrong value,please type again" << endl;
	  goto currlevel2;
	}
      break;
    case 'c':
    currlevel3:
      cout << "Enter currency2 name" << endl;
      cin >> currname2;
      if (currname2 == 'a' || currname2 == 'A')
	{
	  currency2 = currency1 * 1.06;
	}
      else if (currname2 == 'b' || currname2 == 'B')
	{
	  currency2 = currency1 * 89.00;
	}
      else if (currname2 == 'c' || currname2 == 'C')
	{
	  currency2 = currency1 * 1;
	}
      else if (currname2 == 'd' || currname2 == 'D')
	{
	  currency2 = currency1 * 0.87;
	}
      else
	{
	  cout << "You have entered wrong value,please type again" << endl;
	  goto currlevel3;
	}
      break;
    case 'd':
    currlevel4:
      cout << "Enter currency2 name" << endl;
      cin >> currname2;
      if (currname2 == 'a' || currname2 == 'A')
	{
	  currency2 = currency1 * 1.22;
	}
      else if (currname2 == 'b' || currname2 == 'B')
	{
	  currency2 = currency1 * 101.81;
	}
      else if (currname2 == 'c' || currname2 == 'C')
	{
	  currency2 = currency1 * 1.14;
	}
      else if (currname2 == 'd' || currname2 == 'D')
	{
	  currency2 = currency1 * 1;
	}
      else
	{
	  cout << "You have entered wrong value,please type again" << endl;
	  goto currlevel4;
	}
      break;
    default:
      {
	cout << "You have entered wrong value,please type again" << endl;
	goto currlevel;
	break;
      }





    }


return currency2;
}
