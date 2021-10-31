#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::text
{
	class TextPaint;
}

namespace android::text::style
{
	class ForegroundColorSpan : public android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ForegroundColorSpan(const char *className, const char *sig, Ts...agv) : android::text::style::CharacterStyle(className, sig, std::forward<Ts>(agv)...) {}
		ForegroundColorSpan(QAndroidJniObject obj);
		
		// Constructors
		ForegroundColorSpan(android::os::Parcel arg0);
		ForegroundColorSpan(jint arg0);
		
		// Methods
		jint describeContents();
		jint getForegroundColor();
		jint getSpanTypeId();
		void updateDrawState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style
