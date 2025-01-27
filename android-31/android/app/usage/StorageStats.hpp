#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class StorageStats : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit StorageStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StorageStats(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jlong getAppBytes() const;
		jlong getCacheBytes() const;
		jlong getDataBytes() const;
		jlong getExternalCacheBytes() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::usage

