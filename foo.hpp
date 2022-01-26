#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    std::for_each(people.begin(), people.end(), [](Human& hum) { hum.birthday(); });
    std::transform(people.begin(), people.end(), ret_v.rbegin(), [](Human& hum) {
        if (hum.isMonster()) 
        {
            return ('n');
        }
        else 
        {
            return ('y');
        }
    });

    return ret_v;
}
