//
// Created by xfwduke on 7/22/19.
//

#include "SelectDescriptor.h"
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>


std::string SelectDescriptor::to_json() const {
    std::stringstream res;
    boost::property_tree::write_json(res, json);
    return res.str();
}
