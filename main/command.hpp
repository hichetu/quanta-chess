#ifndef _QUANTA_CHESS_COMMAND_H_
#define _QUANTA_CHESS_COMMAND_H_

#include <string>

#include "defines.hpp"

namespace quanta {
class command {
 public:
  void read_command();
  void do_command(const std::string& cmd);

 private:
  // char buffer[COMMAND_BUFFER_LEN];
};

}  // namespace quanta

#endif