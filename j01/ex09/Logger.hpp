/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:50:02 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 16:37:41 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <ctime>
# include <fstream>

class Logger {
  private:
    void logToConsole(std::string message);
    void logToFile(std::string message);
    std::string makeLogEntry(std::string const &message);
  public:
    void log(std::string const & dest, std::string const & message);
    Logger(std::string filename);
    ~Logger(void);
    std::string filename;
};

#endif