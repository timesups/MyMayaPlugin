#include"HelloWordNode.h"



static const MString TypeName = "helloworld";
static const MTypeId TypeID = MTypeId(0x0007f7f7);

static const MString DRAW_DB_CLASSIFICASTION = "drawdb/geormery/helloworld";
static const MString DRAW_REGISTRATION_ID = "HelloWorldNode";




HelloWordNode::HelloWordNode():MPxLocatorNode()
{
}

HelloWordNode::~HelloWordNode()
{
}

void* HelloWordNode::Creator()
{




	return (new HelloWordNode());
}

MStatus HelloWordNode::Initialize()
{


	return MS::kSuccess;
}

MTypeId HelloWordNode::GetTypeID()
{
	return TypeID;
}

MString HelloWordNode::GetTypeName()
{
	return TypeName;
}

MString HelloWordNode::GetDrawDbClassification()
{
	
	return DRAW_DB_CLASSIFICASTION;
}

MString HelloWordNode::GetDrawRegistrationID()
{
	return DRAW_REGISTRATION_ID;
}
