#pragma once

#include "Command.h"

class CmdSetLightAmbient : public Command
{
public:
    const char* GetName() override
    {
        return "SetLightAmbient";
    }
    const char* GetDescription() override
    {
        return "SetLightAmbient(r, g, b)\n"
            "\n"
            "- Set ambient color for a light.";
    }
    bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetLightDiffuse : public Command
{
public:
    const char* GetName() override
    {
        return "SetLightDiffuse";
    }
    const char* GetDescription() override
    {
        return "SetLightDiffuse(r, g, b)\n"
            "\n"
            "- Set diffuse color for a light.";
    }
    bool Execute(const std::vector<std::string>& params) override;
};

class CmdSetLightSpecular : public Command
{
public:
    const char* GetName() override
    {
        return "SetLightSpecular";
    }
    const char* GetDescription() override
    {
        return "SetLightSpecular(r, g, b)\n"
            "\n"
            "- Set specular color for a light.";
    }
    bool Execute(const std::vector<std::string>& params) override;
};

class CmdAddDirectionalLight : public Command
{
public:
const char* GetName() override
    {
        return "AddDirectionalLight";
    }
    const char* GetDescription() override
    {
        return "AddDirectionalLight(x, y, z)\n"
            "\n"
            "- Add a directional light to the light manager.";
    }
    bool Execute(const std::vector<std::string>& params) override;
};

class CmdAddPointLight : public Command
{
public:
    const char* GetName() override
    {
        return "AddPointLight";
    }
    const char* GetDescription() override
    {
        return "AddPointLight(x, y, z, <constant>, <linear>, <quadratic>)\n"
            "\n"
            "- Add a point light to the light manager.";
    }
    bool Execute(const std::vector<std::string>& params) override;
};

class CmdAddSpotLight : public Command
{
public:
    const char* GetName() override
    {
        return "AddSpotLight";
    }
    const char* GetDescription() override
    {
        return "AddSpotLight(pX, pY, pZ, dX. dY, dZ, <constant>, <linear>, <quadratic>, <angle>, <decay>)\n"
            "\n"
            "- Add a spot light to the light manager.";
    }
    bool Execute(const std::vector<std::string>& params) override;
};