#pragma once

#include "Command.h"

class CmdEndDraw : public Command
{
public:

	const char* GetName() override
	{
		return "EndDraw";
	}
	const char* GetDescription() override
	{
		return "BeginEnd()\n"
			"\n"
			"- sends vertices to rasterizer to render";
	}
	bool Execute(const std::vector <std::string>& params) override;
};