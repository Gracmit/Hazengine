#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazengine::Application* Hazengine::CreateApplication();

int main(int argc, char** argv) {
	auto app = Hazengine::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
