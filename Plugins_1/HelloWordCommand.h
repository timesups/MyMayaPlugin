#pragma once
#include<maya/MPxCommand.h>//��Ҫ����MPxCommand
class HelloWordCommand :public MPxCommand
{
public:
	//functions
	HelloWordCommand();
	virtual ~HelloWordCommand() override;//ʹ������������Ҫ��д
	virtual MStatus doIt(const MArgList& args) override;//��дdoIt����


	//static
	static void* Creator();//��������
	static MString CommandName();//�������ƺ���

};

