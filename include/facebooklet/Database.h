//
// Created by Steven on 4/9/15.
//

#ifndef ANIMAL_DATABASE_H
#define ANIMAL_DATABASE_H

#include "interfaces.h"
#include <map>
#include <vector>

namespace fb {
class Database {
public:
  Database();

  Database(Database &db) = delete;

  IFaceBookletNode *get_node(id_t id);

  void set_node(id_t id, NodeUptr node);

  bool has_node(id_t id);

  void remove_node(id_t id);

  std::vector<id_t> ids_with_name(std::string name);

private:
  std::map<id_t, NodeUptr> nodes;
};
}

#endif // ANIMAL_DATABASE_H
