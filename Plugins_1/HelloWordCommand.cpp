#include"HelloWordCommand.h"
#include<maya/MGlobal.h>//用于输出
#include<maya/MIOStream.h>//用于控制台输出
//static Constans
static const MString MEL_COMMAND = "HelloWorld";//定义一个全局变量作为命令名称

HelloWordCommand::HelloWordCommand()
{
}

HelloWordCommand::~HelloWordCommand()
{
}

MStatus HelloWordCommand::doIt(const MArgList& args)
{
	//MGlobal::displayInfo("Hello World");
	
	cout << "Hello World" << endl;

	return MStatus::kSuccess;
}

void* HelloWordCommand::Creator()
{

	return (new HelloWordCommand());//返回命令对象
}

MString HelloWordCommand::CommandName()
{
	return(MEL_COMMAND);//回函数名称
}

