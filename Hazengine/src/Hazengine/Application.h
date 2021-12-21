#pragma once

#include "Core.h"

namespace Hazengine {


	class HAZENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();

	};

	// To be defined in client
	Application* CreateApplication();
}