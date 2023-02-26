#pragma once
#include "RE/B/BSFixedString.h"
#include "RE/B/BSSystemFile.h"

namespace RE
{
	class BSLog
	{
		BSLog(
			char*         logName,
			char*         logFolder,
			bool          timeStamped,
			int           logNumber,
			std::uint32_t bufferSize);
		~BSLog();
		void          CycleLog();
		bool          WriteEntry(char const* data, bool forceWriteToDisk);
		bool          WriteData(char* data, std::uint32_t numWrite, bool forceWriteToDisk);
		bool          FlushBufferToFile(std::uint32_t numWrite, bool forceWriteToDisk);
		std::uint32_t GetBufferFreeSpace();

		BSFixedString            logName;      //00
		BSFixedString            logFolder;    //08
		bool                     timeStamped;  //10
		char                     pad11[3];     //11
		std::uint32_t            logNumber;    //14
		BSSpinLock               writeLock;    //18
		void*                    bufferData;   //20
		std::uint32_t            bufferSize;   //28
		char                     pad2C[4];     //2C
		void*                    pos2;         //30
		void*                    pos1;         //38
		bool                     isReady;      //40
		bool                     isActive;     //41
		char                     pad42[6];     //42
		BSResource::BSSystemFile sysFile;      //48

	private:
		inline BSLog *ctor(
			char*         p_logName,
			char*         p_logFolder,
			bool          timeStamped,
			int           logNumber,
			std::uint32_t bufferSize);
		inline void dtor();
	};

	static_assert(sizeof(BSLog) == 0x58);
}
