/*! @file CPolynomial.h
	@brief class polynomial
	@author Kail Galeazzi Trimming

*/ 

#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include "CFunction.h"

/// @class Polynomial
/// @brief A base class for polynomial
class Polynomial : public Function {
private:
    double* coeff;
    int degree;

public:
	/// @name CONSTRUCTOR/DESTRUCTOR
	/// @{
    Polynomial();
	Polynomial(const double* coefficients, int size);
    Polynomial(const Polynomial& p);
    ~Polynomial();
	/// @}

	/// @name OPERATORS 
	/// @{
    Polynomial& operator=(const Polynomial& p);
	Polynomial operator+(const Polynomial& p);
	bool operator==(const Polynomial& p);
	/// @}

	/// @name SETTERS 
	/// @{
	void SetPolynomial(const double* coefficients, int size);
	///@}
	
	/// @name GETTERS 
	/// @{
    double GetValue(double in) const;
	///@}
	
	/// @name BASIC HANDLING 
	/// @{
	void Reset();
	///@}

	/// @name DEBUG AND SERIALIZATION
	/// @{
	void ErrorMessage(const char *string);
	void WarningMessage(const char *string);
	void Dump();
	/// @}
};

#endif