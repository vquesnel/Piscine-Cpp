/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 09:35:32 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/17 14:56:17 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

Conv::Conv(void) {}

Conv::Conv(Conv const &instance)
{
  *this = instance;
  return;
}

Conv::Conv(std::string const &string) :
  _param(string),
  _type(FindType(string))
{}

Conv::~Conv(void)
{}

Conv    &Conv::operator=(Conv const &rhs)
{
  if (this != &rhs) {
    this->_type = rhs._type;
    this->_param = rhs._param;
  }

  return (*this);
}

char   Conv::getType(void) const
{
  return this->_type;
}

char    Conv::FindType(std::string const &string) const
{
  char const *sampleString = string.c_str();
  char  pointChar = 0;
  char  fChar = 0;
  char  minusChar = 0;
  char  plusChar = 0;

  if (string.size() == 1) {
    return isdigit(*sampleString) ? INT : CHAR;
  }
  if (string == "-inff" || string == "+inff" || string == "nanf") {
    return FLOAT;
  }
  if (string == "-inf" || string == "+inf" || string == "nan") {
    return DOUBLE;
  }
  for (int i = 0; i < static_cast<int>(string.length()); i++) {
    if (sampleString[i] == '.') {
      pointChar++;
    }
    else if (sampleString[i] == 'f' && !sampleString[i + 1]) {
      fChar++;
    }
    else if (sampleString[i] == 'f' && sampleString[i + 1]) {
      return ERROR;
    }
    else if (sampleString[i] == '-') {
      minusChar++;
    }
    else if (sampleString[i] == '+') {
      plusChar++;
    }
    else if (!isdigit(sampleString[i])) {
      return ERROR;
    }
  }
  if (pointChar > 1 || fChar > 1 || minusChar > 1 || plusChar > 1 || (plusChar  && minusChar)) {
    return ERROR;
  }
  if (pointChar && fChar) {
    return FLOAT;
  }
  else if (pointChar) {
    return DOUBLE;
  }
  else if (fChar) {
    return FLOAT;
  }
  return INT;
}

char    Conv::toChar(void) const
{
  char c = static_cast<char>(atoi(this->_param.c_str()));
  if (this->_type == CHAR) {
    return static_cast<char>(this->_param[0]);
  }
	if (this->_param == "-inff" || this->_param == "+inff" ||
  this->_param == "nanf" || this->_param == "-inf" || this->_param == "+inf"
  || this->_param == "nan" || std::strtol(this->_param.c_str(), NULL, 0) > 127
  || std::strtol(this->_param.c_str(), NULL, 0) < -128) {
		throw std::invalid_argument("\bimpossible");
  }
	else if (c < 32 || c > 126) {
		throw std::invalid_argument("\bNon displayable");
  }
	return c;
}

int    Conv::toInt(void) const
{
  if (this->_param == "-inff" || this->_param == "+inff" ||
  this->_param == "nanf" || this->_param == "-inf" || this->_param == "+inf"
  || this->_param == "nan") {
    throw std::invalid_argument("impossible");
  }
  if (std::strtol(this->_param.c_str(), NULL, 0) > INT_MAX ||
   std::strtol(this->_param.c_str(), NULL, 0) < INT_MIN) {
    throw std::invalid_argument("impossible");
  }
  return this->_type == CHAR ?
     static_cast<int>(this->_param[0]) :
     static_cast<int>(std::atoi(this->_param.c_str()));
}

float   Conv::toFloat(void) const
{
  if (this->_type == CHAR)
    return static_cast<float>(this->_param[0]);

	return std::atof(this->_param.c_str());
}

double    Conv::toDouble(void) const
{
  if (this->_type == CHAR) {
    return static_cast<double>(this->_param[0]);
  }
  return (std::strtod(this->_param.c_str(), NULL));
}
