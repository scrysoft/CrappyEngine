#include "cepch.h"
#include "Application.h"

#include "CrappyEngine/Events/ApplicationEvent.h"
#include "CrappyEngine/Log.h"

#include <GLFW/glfw3.h>

namespace CrappyEngine {

	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application() {

	}

	void Application::Run() {
		while (m_Running) {
			glClearColor(0, 1, 0, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}
}