#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazengine::Application* Hazengine::CreateApplication();

int main(int argc, char** argv) {
	Hazengine::Log::Init();
	HZ_CORE_ERROR("Initialized a log!");
	HZ_INFO("Hello!");

	auto app = Hazengine::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
