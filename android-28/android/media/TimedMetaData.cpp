#include "../../JByteArray.hpp"
#include "../os/Parcel.hpp"
#include "./TimedMetaData.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	TimedMetaData::TimedMetaData(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JByteArray TimedMetaData::getMetaData() const
	{
		return callObjectMethod(
			"getMetaData",
			"()[B"
		);
	}
	jlong TimedMetaData::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
} // namespace android::media

