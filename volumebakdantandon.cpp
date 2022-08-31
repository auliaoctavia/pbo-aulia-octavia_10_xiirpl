#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int t, r, p, volumebak, tt, volumetotal, l;
   float volumetabung;

   raptor_prompt_variable_zzyz ="Masukkan panjang bak";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> p;
   raptor_prompt_variable_zzyz ="Masukkan lebar bak";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> l;
   raptor_prompt_variable_zzyz ="Masukkan tinggi bak";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> t;
   raptor_prompt_variable_zzyz ="Masukkan rusuk tabung";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> r;
   raptor_prompt_variable_zzyz ="Masukkan tinggi balok";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> tt;
   volumebak =p*l*t;
   volumetabung =3,14*r *r*tt;
   volumetotal =volumebak+volumetabung;
   cout << volumetotal << endl;
   return 0;
}
