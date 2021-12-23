#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Hazengine {
	class HAZENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core Log macros
#define HZ_CORE_TRACE(...)		::Hazengine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)		::Hazengine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)		::Hazengine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)		::Hazengine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...)		::Hazengine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Log macros
#define HZ_TRACE(...)			::Hazengine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)			::Hazengine::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)			::Hazengine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)			::Hazengine::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_FATAL(...)			::Hazengine::Log::GetClientLogger()->fatal(__VA_ARGS__)