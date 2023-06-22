#include <iostream>

using namespace std;

// Задание 1
//int main() 
//{
    //setlocale(0,"RUS");

    //int MoneyInMonth[6];
    //int count = 0;
    // Способ 1
    //cout << "Введите прибыль за первый месяц:\n";
    //cin >> MoneyInMonth[0];
    //cout << "Введите прибыль за второй месяц:\n";
    //cin >> MoneyInMonth[1];
    //cout << "Введите прибыль за третий месяц:\n";
    //cin >> MoneyInMonth[2];
    //cout << "Введите прибыль за четвёртый месяц:\n";
    //cin >> MoneyInMonth[3];
    //cout << "Введите прибыль за пятый месяц:\n";
    //cin >> MoneyInMonth[4];
    //cout << "Введите прибыль за шестой месяц:\n";
    //cin >> MoneyInMonth[5];

   //cout << MoneyInMonth[0] + MoneyInMonth[1] + MoneyInMonth[2] + MoneyInMonth[3] + MoneyInMonth[4] + MoneyInMonth[5];

  // Способ 2
  //for (int i = 0; i <= 5; i++)
  //{
  //  count++;
  //  cout << "Введите прибыль за " << count << " месяц:\n";
  //  cin >> MoneyInMonth[i];
  //}
  //cout << MoneyInMonth[0] + MoneyInMonth[1] + MoneyInMonth[2] + MoneyInMonth[3] + MoneyInMonth[4] + MoneyInMonth[5];
//}




// Задание 2
//int main() 
//{
  //int massive[10];

  //massive[0] = 1;
  //massive[1] = 2;
  //massive[2] = 3;
  //massive[3] = 4;
  //massive[4] = 5;
  //massive[5] = 6;
  //massive[6] = 7;
  //massive[7] = 8;
  //massive[8] = 9;
  //massive[9] = 10;

  //for (int i = 0;i <= 9;i++) 
  //{
  //  cout << massive[i] << " ";
  //}
  //cout << "\n";
  //for (int j = 9;j >= 0;j--) 
  //{
  //  cout << massive[j] << " ";
  //}
//}




// Задание 3
//int main() 
//{
//  setlocale(0,"RUS");

//  int Length[5];
//  int count = 0;

//  for (int i = 0; i <= 4; i++)
//  {
//    count++;
//    cout << "Введите длину " << count << " сторону пятиугольника:\n";
//    cin >> Length[i];
//  }
//  cout << "Периметр пятиугольника:";
//  cout << Length[0] + Length[1] + Length[2] + Length[3] + Length[4];
//}








// Задание 4
//int main()
//{
//    setlocale(0, "RUS");

//    int MoneyInMonth[13];
//    int count = 0;

//    int Max_Profit = MoneyInMonth[0];
//    int Min_Profit = MoneyInMonth[0];
//    int Max = 0;
//    int Min = 0;

//    for (int i = 1; i <= 12; i++)
//    {
//        count++;
//        cout << "Введите прибыль за " << count << " месяц:\n";
//        cin >> MoneyInMonth[i];

//        if (MoneyInMonth[i] > Max_Profit)
//        {
//            Max_Profit = MoneyInMonth[i];
//            Max = i;
//        }

//        if (MoneyInMonth[i] < Min_Profit)
//        {
//            Min_Profit = MoneyInMonth[i];
//            Min = i;
//        }
//    }
//    cout << "Месяц с максимальной прибылью: " << Max << "\n";
//    cout << "Месяц с минимальной прибылью: " << Min << "\n";
//}