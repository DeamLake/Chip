workspace "Chips"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Chips"
	location "Chips"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
	}

	includedirs
	{
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"CPS_PLATFORM_WINDOWS",
			"CPS_BUILD_DLL"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/SandBox")
		}
	
	filter "configurations:Debug"
		defines "CPS_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "CPS_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "CPS_DIST"
		optimize "On"

project "SandBox"
	location "SandBox"
	kind "ConsoleApp"

	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
	}

	includedirs
	{
		"Chips/vendor/spdlog/include",
		"Chips/src"
	}

	links
	{
		"Chips"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"CPS_PLATFORM_WINDOWS"
		}
	
	filter "configurations:Debug"
		defines "CPS_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "CPS_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "CPS_DIST"
		optimize "On"