#include <CrappyEngine.h>

class Sandbox : public CrappyEngine::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

CrappyEngine::Application* CrappyEngine::CreateApplication() {
	return new Sandbox();
}