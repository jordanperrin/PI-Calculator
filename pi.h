//
//  pi.h
//  Pi Calculator
//
//  Created by Jordan Perrin on 11/10/21.
//

#ifndef pi_h
#define pi_h

using namespace std;

class estimating_pi
{
  public:
    estimating_pi(); //default constuct
   // ~estimating_pi(); //deconstrutor no need for decon
    double random_num();
    double calc_distance();
    double points_in_n_out();
    void check_in_out(double distance);
    void calculate_pi(int n);
    double ratio();



  private:
    double points_in_circle;
    double points_total;
    double x;
    double y;


};

#endif /* pi_h */
