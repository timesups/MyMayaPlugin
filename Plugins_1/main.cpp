#include<maya/MFnPlugin.h>
#include<maya/MGlobal.h>
#include"HelloWordCommand.h"



MStatus initializePlugin(MObject pluginObj) {
	const char vendor[] = "ZCX";//��������
	const char version[] = "1.0.0";//����汾
	const char requiredApiVersion[] = "Any";//api�汾


	MStatus status;//����һ��Mstatus��

	MFnPlugin pluginfn(pluginObj, vendor, version, requiredApiVersion, &status);//���ݲ����Ϣ

	if (!status) {
		MGlobal::displayError("Failed to initialize plugin:" + status.errorString());
		return(status);
	}

	status = pluginfn.registerCommand(HelloWordCommand::CommandName(), HelloWordCommand::Creator);//ע������
	if (!status) {
		MGlobal::displayError("Failed to initialize plugin:" + status.errorString());
		return(status);
	}
	return(status);
}



MStatus uninitializePlugin(MObject pluginObj) 
{
	MStatus status;//����MStatus


	MFnPlugin pluginfn(pluginObj);

	status = pluginfn.deregisterCommand(HelloWordCommand::CommandName());//ȡ��ע������

	if (!status) {
		MGlobal::displayError("Failed to initialize plugin:" + status.errorString());
		return(status);
	}
	return(status);
}




