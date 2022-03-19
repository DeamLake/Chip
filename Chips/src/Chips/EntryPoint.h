#pragma once

#ifdef CPS_PLATFORM_WINDOWS

extern Chips::Application* Chips::CreateApplication();

int main(int argc, char** argv)
{
	Chips::Log::Init();
	CPS_CORE_WARN("Initialized Log!");
	int a = 5;
	CPS_CORE_INFO("Hello! Var = {0}",a);

	auto app = Chips::CreateApplication();
	app->Run();
	delete app;
}

#endif 
