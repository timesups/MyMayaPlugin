#include"HelloWordNode.h"



static const MString typeName = "helloworld";
static const MTypeId TypeID = MTypeId(0x0007f7f7);

static const MString DRAW_DB_CLASSIFICASTION = "drawdb/geormery/helloworld";
static const MString DRAW_REGISTRAtion_ID = "HelloWorldNode";




HelloWordNode::HelloWordNode()
{
}

HelloWordNode::~HelloWordNode()
{
}

void* HelloWordNode::Creator()
{
	return nullptr;
}

MStatus HelloWordNode::Initialize()
{
	return MStatus();
}

MTypeId HelloWordNode::GetTypeID()
{
	return MTypeId();
}

MString HelloWordNode::GetTypeName()
{
	return MString();
}

MString HelloWordNode::GetDrawDbClassification()
{
	return MString();
}

MString HelloWordNode::GetDrawRegistrationID()
{
	return MString();
}
