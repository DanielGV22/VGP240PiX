#pragma once

#include "Command.h"

class CmdEndDraw :public  Command {

public:

	const char* GetName()override {

		return "End draw";

	}

	const char* GetDescription()override {

		return "EndDraw()\n"
			"\n"
			"ends draw.\n"
			"sends vertices to rasterizer";

	}

	bool Execute(const std::vector < std::string>& params)override;

private:


};