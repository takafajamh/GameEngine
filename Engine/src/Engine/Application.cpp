#include "Application.h"
#include <iostream>
namespace sk
{

	Application::Application()
	{
	}

	Application::~Application()
	{
	}


	#ifdef __EMSCRIPTEN__

	void Application::Run()
	{
		std::cout << "d" << std::endl;
	}


	#else	

	void Application::Run()
	{
		while (true);
	}

	#endif
}
