#pragma once

#include "Core.h"

namespace CrappyEngine {

	class CRAPPYENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();

}

