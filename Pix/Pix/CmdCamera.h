#pragma once

#include "Command.h"

class CmdSetCameraPosition : public Command
{
public:
	const char* GetName() override {
		return "SetCameraPosition";
	}

	const char* GetDescription() override 
	{
		return "Set the camera position(x, y, z)"
			"\n"
			"- sets the camera position";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetCameraDirection : public Command
{
public:
	const char* GetName() override {
		return "SetCameraDirection";
	}

	const char* GetDescription() override
	{
		return "Set the camera Direction(x, y, z)"
			"\n"
			"- sets the camera direction";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetCameraNear: public Command
{
public:
	const char* GetName() override {
		return "SetCameraNear";
	}

	const char* GetDescription() override
	{
		return "Set the camera near(value)"
			"\n"
			"- sets the camera near value";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetCameraFar: public Command
{
public:
	const char* GetName() override {
		return "SetCameraFar";
	}

	const char* GetDescription() override
	{
		return "Set the camera far(value)"
			"\n"
			"- sets the camera far value";
	}

	bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetCameraFov : public Command
{
public:
	const char* GetName() override {
		return "SetCameraFov";
	}

	const char* GetDescription() override
	{
		return "Set the camera Fov(radians)"
			"\n"
			"- sets the camera field of view angle";
	}

	bool Execute(const std::vector<std::string>& params) override;
};


