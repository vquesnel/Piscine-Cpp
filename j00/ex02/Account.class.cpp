/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 17:42:23 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/09 12:58:52 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

Account::Account(int deposit)
{
  this->_accountIndex = Account::_nbAccounts;
  this->_amount = deposit;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;

  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" <<
  this->_amount << ";created"<< std::endl;
  Account::_nbAccounts++;
  Account::_totalAmount += deposit;
}

Account::~Account(void)
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:"
  << this->_amount << ";closed" << std::endl;
}
void Account::_displayTimestamp(void)
{
   time_t t = time(0);
   struct tm * now = localtime( & t );
   std::cout << '[' << (now->tm_year + 1900) << (now->tm_mon + 1) <<
   now->tm_mday << '_' << now->tm_hour << now->tm_min << now->tm_sec << ']';
}
void	Account::displayAccountsInfos(void)
{
  _displayTimestamp();
  std::cout << "accounts:" << Account::_nbAccounts << ";total:"
  << Account::_totalAmount << ";deposits:" <<  Account::_totalNbDeposits
  << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void  Account::displayStatus(void) const
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
  << ";deposits:" << this->_nbDeposits << ";withdrawals:" <<
  this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
  _displayTimestamp();
  this->_nbDeposits++;
  Account::_totalNbDeposits++;
  Account::_totalAmount += deposit;
  std::cout << "index:" << this->_accountIndex <<";p_amount:" << this->_amount
  << ";deposit:" << deposit << ";amount:" << this->_amount + deposit
  << ";nb_deposits:" << this->_nbDeposits << std::endl;
  this->_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex <<";p_amount:" << this->_amount
  <<";withdrawal:";

  if (this->_amount < withdrawal) {
    std::cout << "refused" << std::endl;
    return (false);
  }
  else {
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    std::cout << withdrawal << ";amount:" << this->_amount <<
    ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return(true);
  }
}
