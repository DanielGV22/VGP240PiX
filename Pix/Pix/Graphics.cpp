#include "Graphics.h"

#include "Viewport.h"
#include "Clipper.h"
#include"MatrixStack.h"
#include "Camera.h"
#include "MaterialManager.h"

void Graphics::NewFrame()
{
	Viewport::Get()->OnNewFrame();
	Clipper::Get()->OnNewFrame();
	MatrixStack::Get()->OnNewFrame();
	Camera::Get()->OnNewFrame();
	MaterialManager::Get()->OnNewFrame();
}