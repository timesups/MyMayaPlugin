#pragma once
#include<maya/MPxCommand.h>//需要包含MPxCommand
class HelloWordCommand :public MPxCommand
{
public:
	//functions
	HelloWordCommand();
	virtual ~HelloWordCommand() override;//使用析构函数需要重写
	virtual MStatus doIt(const MArgList& args) override;//重写doIt函数


	//static
	static void* Creator();//创建函数
	static MString CommandName();//命令名称函数

};

