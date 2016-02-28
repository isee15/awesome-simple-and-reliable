//
// Created by rz on 16/2/28.
//

#ifndef AWESOME_SIMPLE_AND_RELIABLE_CSV_H
#define AWESOME_SIMPLE_AND_RELIABLE_CSV_H

#include <iosfwd>
#include <vector>

std::vector<std::string> csv_read_row(std::istream &in, char delimiter);

std::vector<std::string> csv_read_row(std::string &in, char delimiter);

#endif //AWESOME_SIMPLE_AND_RELIABLE_CSV_H
