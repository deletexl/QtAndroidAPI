#pragma once

#include "./ComponentInfo.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class ServiceInfo : public android::content::pm::ComponentInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_EXTERNAL_SERVICE();
		static jint FLAG_ISOLATED_PROCESS();
		static jint FLAG_SINGLE_USER();
		static jint FLAG_STOP_WITH_TASK();
		static jint FLAG_USE_APP_ZYGOTE();
		static jint FOREGROUND_SERVICE_TYPE_CAMERA();
		static jint FOREGROUND_SERVICE_TYPE_CONNECTED_DEVICE();
		static jint FOREGROUND_SERVICE_TYPE_DATA_SYNC();
		static jint FOREGROUND_SERVICE_TYPE_LOCATION();
		static jint FOREGROUND_SERVICE_TYPE_MANIFEST();
		static jint FOREGROUND_SERVICE_TYPE_MEDIA_PLAYBACK();
		static jint FOREGROUND_SERVICE_TYPE_MEDIA_PROJECTION();
		static jint FOREGROUND_SERVICE_TYPE_MICROPHONE();
		static jint FOREGROUND_SERVICE_TYPE_NONE();
		static jint FOREGROUND_SERVICE_TYPE_PHONE_CALL();
		jint flags();
		JString permission();
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::ComponentInfo(className, sig, std::forward<Ts>(agv)...) {}
		ServiceInfo(QJniObject obj);
		
		// Constructors
		ServiceInfo();
		ServiceInfo(android::content::pm::ServiceInfo &arg0);
		
		// Methods
		jint describeContents() const;
		void dump(JObject arg0, JString arg1) const;
		jint getForegroundServiceType() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

