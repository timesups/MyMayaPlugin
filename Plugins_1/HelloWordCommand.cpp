#include"HelloWordCommand.h"
#include<maya/MGlobal.h>//�������
#include<maya/MIOStream.h>//���ڿ���̨���
//static Constans
static const MString MEL_COMMAND = "HelloWorld";//����һ��ȫ�ֱ�����Ϊ��������

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

	return (new HelloWordCommand());//�����������
}

MString HelloWordCommand::CommandName()
{
	return(MEL_COMMAND);//�غ�������
}

