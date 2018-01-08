/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:50:04 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 16:42:36 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string filename) : filename(filename) {}

Logger::~Logger(void) {};

void Logger::log(std::string const & dest, std::string const &message)
{
  std::string newLog = this->makeLogEntry(message);
  std::string dests[] = {"logToFile", "logToConsole"};
  typedef void (Logger::*LoggerFn)(std::string message);

  LoggerFn logs[] = { &Logger::logToConsole, &Logger::logToFile};
  for ( int i = 0; i < 2; i++) {
    if (dests[i] == dest) {
      (this->*(logs[i]))(newLog);
    }
  }
}

std::string Logger::makeLogEntry(std::string const &message)
{
  time_t      rawtime;
  struct tm   *timeinfo;
  std::string newLog;
  std::string timeString;

  time(&rawtime);
  timeinfo = localtime(&rawtime);
  timeString = asctime(timeinfo);
  timeString.erase(std::remove(timeString.begin(), timeString.end(), '\n'), timeString.end());
  newLog += "[" + timeString + "] " + message;

  return newLog;
}

void Logger::logToConsole(std::string message)
{
  std::cout <<  message << std::endl;
}

void Logger::logToFile(std::string message)
{
  std::ofstream file;

  file.open(this->filename, std::fstream::app);
  file << message << std::endl;
  file.close();
}