#pragma once
#include "RE/B/BSFixedString.h"
#include "RE/B/BSSystemFile.h"

namespace RE{
	class BSLog
	{
		BSFixedString logName;              //00
		BSFixedString logFolder;            //08
		bool timeStamped;                   //10
		char gap11[3];		                //11
		std::uint32_t logNumber;	        //14
		BSSpinLock writeLock;		        //18
		void *bufferData;			        //20
		std::uint32_t bufferSize;	        //28
		char gap2C[4];			            //2C
		void *pos2;					        //30
		void *pos1;					        //38
		bool isReady;				        //40
		bool isActive;				        //41
		char gap42[6];				        //42
		BSResource::BSSystemFile sysFile;	//48
	};
	static_assert(sizeof(BSLog) == 0x58);
}

