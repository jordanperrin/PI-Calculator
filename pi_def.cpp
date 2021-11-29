#include "pi.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const double MAX = 1.0;
const double MIN = 0.0;


estimating_pi::estimating_pi(): points_in_circle(0.0), points_total(0.0), x(0.0), y(0.0)
{
  cout << "Default constructor has been called" << endl;
}

double estimating_pi::random_num()
{
  double f = (double)(rand()) / ((double)(RAND_MAX/(MAX - MIN)));
  return f;
}

double estimating_pi::calc_distance()
{
    double dist = (*this).x * (*this).x + (*this).y *(*this).y; //x^2 + y^2
    
    return dist;
}

void estimating_pi::check_in_out(double distance)
{
  if (distance <= 1)
    {
        (*this).points_in_circle++;
    }
    (*this).points_total++;
}

double estimating_pi::ratio()
{
  double pi_ratio = (*this).points_in_circle/(*this).points_total;
    return pi_ratio;
}

void estimating_pi::calculate_pi(int n)
{
  for(int i = 0; i < n; i++)
  {
    (*this).x = random_num();
    (*this).y = random_num();
    double distance = calc_distance();
      check_in_out(distance);
  }

  double calc_ratio = ratio();
  double final =  4.0 * calc_ratio;
  cout << final << endl;
}
