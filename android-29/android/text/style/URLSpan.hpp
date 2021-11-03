#pragma once

#include "./ClickableSpan.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class View;
}
class JString;

namespace android::text::style
{
	class URLSpan : public android::text::style::ClickableSpan
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit URLSpan(const char *className, const char *sig, Ts...agv) : android::text::style::ClickableSpan(className, sig, std::forward<Ts>(agv)...) {}
		URLSpan(QAndroidJniObject obj);
		
		// Constructors
		URLSpan(android::os::Parcel arg0);
		URLSpan(JString arg0);
		
		// Methods
		jint describeContents();
		jint getSpanTypeId();
		JString getURL();
		void onClick(android::view::View arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

