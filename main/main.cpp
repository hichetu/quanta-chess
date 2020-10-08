#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "command.hpp"
#include "defines.hpp"

int main() {
  using namespace quanta;

  cout << prog_version << endl;

  command cmd;

  cmd.read_command();

  return 0;
}