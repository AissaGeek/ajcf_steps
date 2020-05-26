#include "calc.hpp"
#include <chrono>
#include <iostream>
#include <date/date.h>

int mavar_globale;

int add(int i, int j)
{
return i + i;
}
void print_current_date()

{
auto nombre_de_secondes_depuis_1970 =std::chrono::system_clock::now();
auto nombre_de_secondes_depuis_1970 =date::floor<date::days>(nombre_de_secondes_depuis_1970);
auto anne_mois_jour = date::year_month_day(nombre_de_secondes_depuis_1970);
std::cout << anne_mois_jour;



}