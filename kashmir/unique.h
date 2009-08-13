// unique.h -- disable copy construction and assignment

// Copyright (C) 2008 Kenneth Laskoski

/** @file unique.h
    @brief disable copy construction and assignment
    @author Copyright (C) 2008 Kenneth Laskoski

    Use, modification, and distribution are subject to the
    Boost Software License, Version 1.0. See accompanying file
    LICENSE_1_0.txt or <http://www.boost.org/LICENSE_1_0.txt>.
*/

#ifndef KL_UNIQUE_H
#define KL_UNIQUE_H

namespace kashmir {
namespace unique_ { // prevents unintended ADL

class unique
{
protected:
    unique() {}
    ~unique() {}

private:
    unique(const unique&);
    const unique& operator=(const unique&);
};

}

typedef unique_::unique unique;

}

#endif
