#include <Hazengine.h>

class Sandbox : public Hazengine::Application {
public: 
	Sandbox() {

	}
	~Sandbox() {
			
	}
		
};

Hazengine::Application* Hazengine::CreateApplication() {
	return new Sandbox();
}