#pragma once
#include <iostream>


enum season{fall,winter,spring,summer};
enum health{great,ok,poor,dead};
enum color{green, red, orange,yellow, brown};

//probably want these macros active during debug and not during release builds.  So in debug build
//project, properties,c++ general, paths and symbols, symbols tab, add a symbol MY_DEBUG_SYMBOL in this case
//set it to 1, unfortunately this does not work in Kepler
#define MY_DEBUG_SYMBOL
#ifdef MY_DEBUG_SYMBOL

#define FTRACE1( a )	std::cout<<a<<" ..Line #"<<__LINE__<<" ..in file "<<__FILE__<<"\n";
#define FTRACE2( a,b)	std::cout<<a<<b<<" ..Line #"<<__LINE__<<" ..in file "<<__FILE__<<"\n";

#else
	#define FTRACE1(a){  };
	#define FTRACE2(a,b){  };
#endif


