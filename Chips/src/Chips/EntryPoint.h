#pragma once

#ifdef CPS_PLATFORM_WINDOWS

extern Chips::Application* Chips::CreateApplication();

int main(int argc, char** argv)
{
	Chips::Log::Init();

	auto app = Chips::CreateApplication();
	app->Run();
	delete app;
}

#endif 
