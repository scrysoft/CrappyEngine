#pragma once

#ifdef CE_PLATFORM_WINDOWS

extern CrappyEngine::Application* CrappyEngine::CreateApplication();

int main(int argc, char** argv) {

	CrappyEngine::Log::Init();

	printf("Crappy Engine\n");
	auto app = CrappyEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif