#ifndef FASTAUNIQUEPLUGIN_H
#define FASTAUNIQUEPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class FASTAUniquePlugin : public Plugin
{
public: 
 std::string toString() {return "FASTAUnique";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
