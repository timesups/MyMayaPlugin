#include"HelloWorldDrawOverride.h"

HelloWorldDrawOverride::~HelloWorldDrawOverride()
{
}

MHWRender::MPxDrawOverride* HelloWorldDrawOverride::Creator(const MObject& obj)
{



	return (new HelloWorldDrawOverride(obj));
}

HelloWorldDrawOverride::HelloWorldDrawOverride(const MObject& obj):
	MHWRender::MPxDrawOverride(obj,nullptr)
{

}
