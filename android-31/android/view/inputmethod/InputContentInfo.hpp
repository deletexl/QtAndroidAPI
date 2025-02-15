#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ClipDescription;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class InputContentInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit InputContentInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputContentInfo(QJniObject obj);
		
		// Constructors
		InputContentInfo(android::net::Uri arg0, android::content::ClipDescription arg1);
		InputContentInfo(android::net::Uri arg0, android::content::ClipDescription arg1, android::net::Uri arg2);
		
		// Methods
		jint describeContents() const;
		android::net::Uri getContentUri() const;
		android::content::ClipDescription getDescription() const;
		android::net::Uri getLinkUri() const;
		void releasePermission() const;
		void requestPermission() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

