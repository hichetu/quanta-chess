#include "command.hpp"

#include <iostream>
#include <string>

namespace quanta {
using namespace std;

void command::read_command() {
  string cmd;

  cout << "wt> ";

  while (getline(cin, cmd)) {
    cout << "wt> ";
    do_command(cmd);
  }
}

void command::do_command(const string& cmd) {
  cout << cmd << endl;
}

}  // namespace quanta