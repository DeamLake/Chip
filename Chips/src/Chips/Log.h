#pragma once

#include "Core.h"
#include <spdlog/spdlog.h>
#include <memory>

namespace Chips {

	class CPS_API Log
	{
	public:
		static void Init();
		static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
		static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; };
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define CPS_CORE_TRACE(...)	    ::Chips::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CPS_CORE_INFO(...)		    ::Chips::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CPS_CORE_WARN(...)	    ::Chips::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CPS_CORE_ERROR(...)	    ::Chips::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CPS_CORE_FATAL(...)	    ::Chips::Log::GetCoreLogger()->fatal(__VA_ARGS__)
													    
// Client log macros				   	    
#define CPS_TRACE(...)					::Chips::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CPS_INFO(...)						::Chips::Log::GetClientLogger()->info(__VA_ARGS__)
#define CPS_WARN(...)					::Chips::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CPS_ERROR(...)					::Chips::Log::GetClientLogger()->error(__VA_ARGS__)
#define CPS_FATAL(...)					::Chips::Log::GetClientLogger()->fatal(__VA_ARGS__)