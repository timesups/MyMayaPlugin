#pragma once
#include<maya/MPxLocatorNode.h>


class HelloWordNode :public MPxLocatorNode
{
public:
	HelloWordNode();
	virtual ~HelloWordNode() override;


	//static
	static void* Creator();
	static MStatus Initialize();


	static MTypeId GetTypeID();
	static MString GetTypeName();
	


	static MString GetDrawDbClassification();
	static MString GetDrawRegistrationID();
};