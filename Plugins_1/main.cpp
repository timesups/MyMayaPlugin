#include<maya/MFnPlugin.h>
#include<maya/MGlobal.h>
#include"HelloWordCommand.h"



MStatus initializePlugin(MObject pluginObj) {
	const char vendor[] = "ZCX";//作者名称
	const char version[] = "1.0.0";//插件版本
	const char requiredApiVersion[] = "Any";//api版本


	MStatus status;//定义一个Mstatus类

	MFnPlugin pluginfn(pluginObj, vendor, version, requiredApiVersion, &status);//传递插件信息

	if (!status) {
		MGlobal::displayError("Failed to initialize plugin:" + status.errorString());
		return(status);
	}

	status = pluginfn.registerCommand(HelloWordCommand::CommandName(), HelloWordCommand::Creator);//注册命令
	if (!status) {
		MGlobal::displayError("Failed to initialize plugin:" + status.errorString());
		return(status);
	}
	return(status);
}



MStatus uninitializePlugin(MObject pluginObj) 
{
	MStatus status;//定义MStatus


	MFnPlugin pluginfn(pluginObj);

	status = pluginfn.deregisterCommand(HelloWordCommand::CommandName());//取消注册命令

	if (!status) {
		MGlobal::displayError("Failed to initialize plugin:" + status.errorString());
		return(status);
	}
	return(status);
}




