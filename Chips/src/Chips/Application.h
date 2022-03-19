#pragma once
#include "Core.h"

namespace Chips {

	class CPS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be define in CLIENT
	Application* CreateApplication();
}

