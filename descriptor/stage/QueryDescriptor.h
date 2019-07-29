//
// Created by xfwduke on 7/22/19.
//

#ifndef ANTLR4_PARSER_QUERY_DESCRIPTOR_H
#define ANTLR4_PARSER_QUERY_DESCRIPTOR_H

#include <string>
#include <boost/property_tree/ptree.hpp>

class QueryDescriptor {
    bool query_closed;
  public:
    boost::property_tree::ptree json;
    std::string current_path;
    boost::property_tree::ptree *current_node;
  public:
    virtual bool close_query() {
        if (query_closed)
            return false;
        query_closed = true;
        return true;
    }

    inline bool is_closed() const {
        return query_closed;
    }

  public:
    virtual std::string to_json() const = 0;
};

#endif //ANTLR4_PARSER_QUERY_DESCRIPTOR_H
