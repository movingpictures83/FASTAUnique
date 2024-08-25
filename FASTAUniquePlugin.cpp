#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "FASTAUniquePlugin.h"

void FASTAUniquePlugin::input(std::string file) {
 inputfile = file;
}

void FASTAUniquePlugin::run() {}

void FASTAUniquePlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "FASTAUnique";
myCommand += " ";
myCommand += "-in";
myCommand += " ";
myCommand += inputfile + " > "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<FASTAUniquePlugin> FASTAUniquePluginProxy = PluginProxy<FASTAUniquePlugin>("FASTAUnique", PluginManager::getInstance());
