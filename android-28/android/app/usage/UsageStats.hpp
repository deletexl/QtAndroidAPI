#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class UsageStats : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UsageStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsageStats(QAndroidJniObject obj);
		
		// Constructors
		UsageStats(android::app::usage::UsageStats &arg0);
		
		// Methods
		void add(android::app::usage::UsageStats arg0);
		jint describeContents();
		jlong getFirstTimeStamp();
		jlong getLastTimeStamp();
		jlong getLastTimeUsed();
		jstring getPackageName();
		jlong getTotalTimeInForeground();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::usage

