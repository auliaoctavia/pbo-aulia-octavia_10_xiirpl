#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   string lampu;

   raptor_prompt_variable_zzyz ="Lampu merah atau hijau";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> lampu;
   if (lampu=="hijau")
   {
      cout << "jalan" << endl;   }
   else
   {
      cout << "berhenti" << endl;   }

   return 0;
}
