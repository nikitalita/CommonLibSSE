#include "RE/B/BSLog.h"
#include "REL/Relocation.h"

namespace RE
{

	BSLog::BSLog(char* logName, char* logFolder, bool timeStamped, int logNumber, std::uint32_t bufferSize)
	{
		ctor(logName, logFolder, timeStamped, logNumber, bufferSize);
	}

	BSLog* BSLog::ctor(char* p_logName, char* p_logFolder, bool p_timeStamped, int p_logNumber, std::uint32_t p_bufferSize)
	{
		using func_t = decltype(&BSLog::ctor);
		REL::Relocation<func_t> func{ RELOCATION_ID(75087, 76853) };
		return func(this, p_logName, p_logFolder, p_timeStamped, p_logNumber, p_bufferSize);
	}

	BSLog::~BSLog()
	{
		dtor();
	}

	void BSLog::dtor()
	{
		using func_t = decltype(&BSLog::dtor);
		REL::Relocation<func_t> func{ RELOCATION_ID(75088, 76854) };
		return func(this);
	}

	void BSLog::CycleLog()
	{
		using func_t = decltype(&BSLog::CycleLog);
		REL::Relocation<func_t> func{ RELOCATION_ID(75089, 76855) };
		return func(this);
	}

	bool BSLog::WriteEntry(char const* data, bool forceWriteToDisk)
	{
		using func_t = decltype(&BSLog::WriteEntry);
		REL::Relocation<func_t> func{ RELOCATION_ID(75090, 76856) };
		return func(this, data, forceWriteToDisk);
	}

	bool BSLog::WriteData(char* data, std::uint32_t numWrite, bool forceWriteToDisk)
	{
		using func_t = decltype(&BSLog::WriteData);
		REL::Relocation<func_t> func{ RELOCATION_ID(75092, 76858) };
		return func(this, data, numWrite, forceWriteToDisk);
	}

	bool BSLog::FlushBufferToFile(std::uint32_t numWrite, bool forceWriteToDisk)
	{
		using func_t = decltype(&BSLog::FlushBufferToFile);
		REL::Relocation<func_t> func{ RELOCATION_ID(75093, 76859) };
		return func(this, numWrite, forceWriteToDisk);
	}

	std::uint32_t BSLog::GetBufferFreeSpace()
	{
		using func_t = decltype(&BSLog::GetBufferFreeSpace);
		REL::Relocation<func_t> func{ RELOCATION_ID(75094, 76860) };
		return func(this);
	}

}
