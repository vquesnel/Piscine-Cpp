/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:50:06 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 16:10:07 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void) {
  Logger  logger("test.txt");
  logger.log("logToFile", "First log in file");
  logger.log("logToConsole", "First log to console");
  logger.log("logToFile", "Second log in file");
  logger.log("logToConsole", "Second log to console");
  logger.log("logToFile", "Third log in file");
  logger.log("logToConsole", "Third log to console");
  logger.log("logToFile", "Fourth log in file");

  return 0;
}