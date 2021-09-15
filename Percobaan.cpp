#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? sprunk;
   ?? uang;
   ?? total;
   ?? cola;
   ?? request;
   ?? pepsi;

   total =0;
   while (1)
   {
      raptor_prompt_variable_zzyz ="Masukan jumlah uang";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> uang;
      cout << uang << endl;      total =total+uang;
      if (total>=3000)) break;
      cout << "Uang anda tidak cukup" << endl;   }
   cout << total << endl;   raptor_prompt_variable_zzyz ="Masukan yang di inginkan : [1] Cola, [2] Pepsi, [3] Sprunk.";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> request;
   if (request<2)
   {
      if (total>=3000)
      {
         cola =request;
         cout << total-3000;         cout << " Sisa uang anda" << endl;         cout << "Terima Kasih" << endl;      }
      else
      {
         cout << "Uang anda tidak cukup" << endl;      }
   }
   else
   {
      if (request<3)
      {
         if (total>=4000)
         {
            pepsi =request;
            cout << total-4000;            cout << " Sisa uang anda" << endl;            cout << "Terima Kasih" << endl;         }
         else
         {
            cout << "Uang anda tidak cukup" << endl;         }
      }
      else
      {
         if (request<4)
         {
            if (total>=4500)
            {
               sprunk =request;
               cout << total-4500;               cout << " Sisa uang anda" << endl;               cout << "Terima Kasih" << endl;            }
            else
            {
               cout << "Uang anda tidak cukup" << endl;            }
         }
         else
         {
            cout << "Tidak ada Pilihan" << endl;         }
      }
   }

   return 0;
}
