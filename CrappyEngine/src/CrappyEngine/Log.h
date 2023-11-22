#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace CrappyEngine {
	class CRAPPYENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger> GetCoreLogger() {
			return s_CoreLogger;
		}

		inline static std::shared_ptr<spdlog::logger> GetClientLogger() {
			return s_ClientLogger;
		}

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define CE_CORE_TRACE(...)   ::CrappyEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CE_CORE_INFO(...)    ::CrappyEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CE_CORE_WARN(...)    ::CrappyEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CE_CORE_ERROR(...)   ::CrappyEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CE_CORE_CRITICAL(...)   ::CrappyEngine::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define CE_TRACE(...) ::CrappyEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CE_INFO(...)  ::CrappyEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define CE_WARN(...)  ::CrappyEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CE_ERROR(...) ::CrappyEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define CE_CRITICAL(...) ::CrappyEngine::Log::GetClientLogger()->critical(__VA_ARGS__)