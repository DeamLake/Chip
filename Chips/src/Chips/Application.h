#pragma once
#include "Core.h"

namespace Chips {

	class CHIPS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be define in CLIENT
	Application* CreateApplication();
}

