//
//  cont_function.hpp
//  STL
//


#ifndef cont_function_hpp
#define cont_function_hpp

#include "function.hpp"
namespace ariel{
class cont_function:public function{
    /**
     * Compute a Riman's integral from x0 to x1 in eps steps.
     * @param x0 starting pooint
     * @param x1 end point
     * @param eps positive step value
     * @return the approximated area above X-axis below this function bounded in the range of [x0,x1]
     */
     virtual double area(double x0, double x1, double eps)=0;
};
};
#endif /* cont_function_hpp */

