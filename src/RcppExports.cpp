// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// adjacencyCpp
List adjacencyCpp(List x, IntegerVector& feature_order, bool weight);
RcppExport SEXP _RayleighSelection_adjacencyCpp(SEXP xSEXP, SEXP feature_orderSEXP, SEXP weightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type feature_order(feature_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type weight(weightSEXP);
    rcpp_result_gen = Rcpp::wrap(adjacencyCpp(x, feature_order, weight));
    return rcpp_result_gen;
END_RCPP
}
// pushCpp
arma::mat pushCpp(arma::vec v, List x, SEXP perm);
RcppExport SEXP _RayleighSelection_pushCpp(SEXP vSEXP, SEXP xSEXP, SEXP permSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type v(vSEXP);
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type perm(permSEXP);
    rcpp_result_gen = Rcpp::wrap(pushCpp(v, x, perm));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RayleighSelection_adjacencyCpp", (DL_FUNC) &_RayleighSelection_adjacencyCpp, 3},
    {"_RayleighSelection_pushCpp", (DL_FUNC) &_RayleighSelection_pushCpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_RayleighSelection(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
