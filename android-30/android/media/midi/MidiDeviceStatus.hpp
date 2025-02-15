#pragma once

#include "../../../JObject.hpp"

namespace android::media::midi
{
	class MidiDeviceInfo;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::midi
{
	class MidiDeviceStatus : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit MidiDeviceStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiDeviceStatus(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::media::midi::MidiDeviceInfo getDeviceInfo() const;
		jint getOutputPortOpenCount(jint arg0) const;
		jboolean isInputPortOpen(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::midi

