#include <iostream>
#ifndef  __priceops
#define __priceops
using namespace std;
class price_ops
{
    private : int price;
    int convexity;
    public : int calc_convexity( int &pass_price )
    {
        if ( pass_price < 0 )
        {
            pass_price=price;
        }
        convexity=0;
        convexity = pass_price * 100 / 2;
        return convexity;
    }
};

#endif
