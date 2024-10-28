#include <SKEngine.h>


class Sandbox : public sk::Application
{
public:
	Sandbox()
	{
		
	}

	~Sandbox()
	{

	}

};

sk::Application* sk::CreateApplication()
{
	return new Sandbox();
}
