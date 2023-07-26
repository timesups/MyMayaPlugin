#pragma once
#include<maya/MPxDrawOverride.h>



class HelloWorldDrawOverride : public MHWRender::MPxDrawOverride
{
public:
	virtual ~HelloWorldDrawOverride() override;



	//Static M ethods
	static MHWRender::MPxDrawOverride* Creator(const MObject& obj);

private:
	HelloWorldDrawOverride(const MObject& obj);


};

