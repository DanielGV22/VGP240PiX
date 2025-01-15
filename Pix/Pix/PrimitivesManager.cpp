#include "PrimitivesManager.h"


PrimitivesManager* PrimitivesManager::Get() {
	static PrimitivesManager sInstance;
	return &sInstance;
}

PrimitivesManager::PrimitivesManager(){

}

bool PrimitivesManager::BeginDraw(Topology topology) {
	mTopology = topology;
	mDrawBegin = true;
	mVertexBuffer.clear();
	return true;
}
void PrimitivesManager::AddVertex(const Vertex& vertex) {
	if (mDrawBegin) {
		mVertexBuffer.push_back(vertex);
	}
}
bool PrimitivesManager::EndDraw() {
	if (!mDrawBegin) {
		return false;

	}
	mDrawBegin = false;
	return true;
}