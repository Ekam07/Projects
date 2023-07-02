#include <iostream>
using namespace std;
int main()
{
  int quant;
  int choice;
  int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
  int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
  int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

  cout << "\n\t Quantity of items we have";
  cout << "\n Rooms available:";
  cin >> Qrooms;
  cout << "\n quantity of pasta:";
  cin >> Qpasta;
  cout << "\n Quantity of burger:";
  cin >> Qburger;
  cout << "\n quantity of noodles:";
  cin >> Qnoodles;
  cout << "\n Quantity of shake;";
  cin >> Qshake;
  cout << "\n Quantity of chicken roll:";
  cin >> Qchicken;

m:
  cout << "\n\t\t\t Please select from the menu options";
  cout << "\n\n 1). Rooms";
  cout << "\n\n 2). Pasta";
  cout << "\n\n 3). Burger";
  cout << "\n\n 4). Noodles";
  cout << "\n\n 5). Shake";
  cout << "\n\n 6). chiken-Roll";
  cout << "\n\n 7). Information regarding sales and collection";
  cout << "\n\n 8). Exit";

  cout << "\n\n Please enter your choice:  ";
  cin >> choice;

  switch (choice)
  {
  case 1:
    cout << "\n\nEnter the number of rooms you want:";
    cin >> quant;

    if (Qrooms - Srooms >= quant)
    {
      Srooms = Srooms + quant;
      Total_rooms = Total_rooms + (quant * 12000);
      cout << "\n\n\t" << quant << "Room/s have been alloted to you. ";
    }
    else
    {
      if ((Qrooms - Srooms) <= 0)
      {
        cout << "\n\tNo rooms are available";
      }
      else
      {
        cout << "\n\tonly" << Qrooms - Srooms << "Rooms remaining in hotel";
      }
    }
    break;

  case 2:
    cout << "\n\nEnter quantity of pasta :";
    cin >> quant;

    if (Qpasta - Spasta >= quant)
    {
      Spasta = Spasta + quant;
      Total_pasta = Total_pasta + (quant * 250);
      cout << "\n\n\t" << quant << "Pasta is on the way.... ";
    }
    else
    {
      if ((Qpasta - Spasta) <= 0)
      {
        cout << "\n\t Pasta is not available";
      }
      else
      {
        cout << "\n\t only" << Qpasta - Spasta << "pasta remaining in hotel";
      }
    }
    break;

  case 3:
    cout << "\n\nEnter quantity of burger :";
    cin >> quant;

    if (Qburger - Sburger >= quant)
    {
      Sburger = Sburger + quant;
      Total_burger = Total_burger + (quant * 120);
      cout << "\n\n\t" << quant << "burger is on the way..... ";
    }
    else
    {
      if ((Qburger - Sburger) <= 0)
      {
        cout << "\n\t burger is not available";
      }
      else
      {
        cout << "\n\t only" << Qburger - Sburger << "Burger remaining in hotel";
      }
    }
    break;

  case 4:
    cout << "\n\nEnter quantity of noodles :";
    cin >> quant;

    if (Qnoodles - Snoodles >= quant)
    {
      Snoodles = Snoodles + quant;
      Total_noodles = Total_noodles + (quant * 160);
      cout << "\n\n\t" << quant << "noodles are on the way..... ";
    }
    else
    {
      if ((Qnoodles - Snoodles) <= 0)
      {
        cout << "\n\t noodles are not available";
      }
      else
      {
        cout << "\n\t only" << Qnoodles - Snoodles << "noodles remaining in hotel";
      }
    }
    break;

  case 5:
    cout << "\n\nEnter quantity of shake :";
    cin >> quant;

    if (Qshake - Sshake >= quant)
    {
      Sshake = Sshake + quant;
      Total_shake = Total_shake + (quant * 80);
      cout << "\n\n\t" << quant << "shake is on the way.... ";
    }
    else
    {
      if ((Qshake - Sshake) <= 0)
      {
        cout << "\n\t Shake is not available";
      }
      else
      {
        cout << "\n\t only" << Qshake - Sshake << "shake remaining in hotel";
      }
    }
    break;

  case 6:
    cout << "\n\nEnter quantity of chicken-roll :";
    cin >> quant;

    if (Qchicken - Schicken >= quant)
    {
      Schicken = Schicken + quant;
      Total_chicken = Total_chicken + (quant * 270);
      cout << "\n\n\t" << quant << "Chicken-roll is on the way.... ";
    }
    else
    {
      if ((Qchicken - Schicken) <= 0)
      {
        cout << "\n\t Chicken-roll is not available";
      }
      else
      {
        cout << "\n\t only" << Qchicken - Schicken << "chicken-roll remaining in hotel";
      }
    }
    break;

  case 7:
    cout << "\n\n\tDetails of sales and colleciton :";

    cout << "\n\n Number of rooms we had :" << Qrooms;
    cout << "\n\n Number of rooms we gave for rent" << Srooms;
    cout << "\n\n Remaining rooms: " << Qrooms - Srooms;
    cout << "\n\n Total rooms collection for the day: " << Total_rooms;

    cout << "\n\n Quantity of pasta we had :" << Qpasta;
    cout << "\n\n Quantity of pasta sold" << Spasta;
    cout << "\n\n Remaining pasta: " << Qpasta - Spasta;
    cout << "\n\n Total pasta collection for the day: " << Total_pasta;

    cout << "\n\n Quantity of burgers we had :" << Qburger;
    cout << "\n\n Quantity of burgers sold" << Sburger;
    cout << "\n\n Remaining burgers: " << Qburger - Sburger;
    cout << "\n\n Total burger collection for the day: " << Total_burger;

    cout << "\n\n Quantity of noodles we had :" << Qnoodles;
    cout << "\n\n Quantity of noodles  sold" << Snoodles;
    cout << "\n\n Remaining noodles: " << Qnoodles - Snoodles;
    cout << "\n\n Total noodles collection for the day: " << Total_noodles;

    cout << "\n\n Quantity of shake we had :" << Qshake;
    cout << "\n\n Number of shakes sold" << Sshake;
    cout << "\n\n Remaining shakes: " << Qshake - Sshake;
    cout << "\n\n Total shakes collection for the day: " << Total_shake;

    cout << "\n\n Quantity of chicken-roll we had :" << Qchicken;
    cout << "\n\n Quantity of chivken-roll sold" << Schicken;
    cout << "\n\n Remaining chicken-roll: " << Qchicken - Schicken;
    cout << "\n\n Total chicken-roll collection for the day: " << Total_chicken;

    cout << "Total collection of the day: " << Total_rooms + Total_burger + Total_pasta + Total_noodles + Total_shake + Total_chicken;

    break;

  case 8:
    exit(0);

  default:
    cout << "\n select from the numbers above";
  }

  goto m;
}