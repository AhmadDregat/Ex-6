//
//  Monom_Comperator.hpp
//  STL
//


#ifndef Monom_Comperator_hpp
#define Monom_Comperator_hpp
namespace ariel{
bool compare(const Monom &m0,const Monom &m1) {
    return m1.get_power() < m0.get_power();
}
};
#endif /* Monom_Comperator_hpp */
