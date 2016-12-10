##
## Code to generate the RDS file for pcubature using clencurt.h from
## Original cubature-1.0.2 library for M = 19.
## Balasubramanian Narasimhan
##
library(Rcpp)
sourceCpp("code.cpp", verbose=TRUE)
saveRDS(getData(), file = "clencurt-h.RDS")
