#include <Rcpp.h>

#include "clencurt.h"

// [[Rcpp::export]]

Rcpp::List getData() {
  Rcpp::NumericVector cx(524288); // Sizes should match those in clencurt.h!
  Rcpp::NumericVector cw(1048595);

  double* xp = cx.begin();
  for (int i = 0; i < 524288; i++) {
    xp[i] = clencurt_x[i];
  }

  xp = cw.begin();
  for (int i = 0; i < 1048595; i++) {
    xp[i] = clencurt_w[i];
  }
  return Rcpp::List::create(Rcpp::_["clencurt_M"] = clencurt_M,
			    Rcpp::_["clencurt_x"] = cx,
			    Rcpp::_["clencurt_w"] = cw);
}
