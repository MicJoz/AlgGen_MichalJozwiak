#pragma once
#include <vector>
#include "TParam.h"
//#define GENS_COUNT 2
class TCandidate
{
protected:
    int gens_count = 0;
    std::vector<TParam> genotype;

     double mark;
public:

    TCandidate();
    TCandidate(const TCandidate &original);

    virtual TCandidate* create() = 0;
    virtual TCandidate* create_copy() const = 0;

    double get_mark() const {return mark; };
    virtual void rate() = 0;
    void info();

protected:
  virtual void init_vector() = 0;
    void rand_gens_val();
    double get_gen_val(int gen_id) const { return genotype[gen_id].get_val(); }
};

