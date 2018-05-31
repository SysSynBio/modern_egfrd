#include <random>
#include <iostream>
#include <algorithm>
#include <iomanip>

int main()
{
   std::seed_seq seq{ 1,2,3,4,5 };

   std::vector<std::uint32_t> seeds(25);
   seq.generate(seeds.begin(), seeds.end());

   //std::vector<std::double_t> p1({ 1.00E-02 , 1.00E-06 });

   //std::vector<std::double_t> p2(37);
   //int n = 0;
   //std::generate(p2.begin(), p2.end(), [&n]() { return std::pow(10, -14 + static_cast<double>(n++) / 12); });

   std::vector<std::double_t> p2({ 5E-11, 1E-10, 2E-10, 5E-10, 1E-9, 2E-9, 5E-9, 1E-8, 2E-8, 5E-8, 1E-7, 2E-7, 5E-7, 1E-6 });

   std::cout << std::scientific << std::setprecision(1);
   std::cout << std::uppercase << std::hex << std::setfill('0') << std::setw(8);
   std::cout << std::dec << std::setw(0);

   //for (auto pp1 : p2)
   for (auto pp2 : p2)
      for (std::uint32_t s : seeds)
         std::cout << std::scientific << pp2 << "   0x" << std::hex << std::setw(8) << s << std::endl;
}
