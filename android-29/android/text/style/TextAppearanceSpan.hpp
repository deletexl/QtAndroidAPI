#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics
{
	class Typeface;
}
namespace android::os
{
	class LocaleList;
}
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
	class TextAppearanceSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextAppearanceSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		TextAppearanceSpan(QAndroidJniObject obj);
		
		// Constructors
		TextAppearanceSpan(android::os::Parcel arg0);
		TextAppearanceSpan(android::content::Context arg0, jint arg1);
		TextAppearanceSpan(android::content::Context arg0, jint arg1, jint arg2);
		TextAppearanceSpan(jstring arg0, jint arg1, jint arg2, android::content::res::ColorStateList arg3, android::content::res::ColorStateList arg4);
		
		// Methods
		jint describeContents();
		jstring getFamily();
		jstring getFontFeatureSettings();
		jstring getFontVariationSettings();
		QAndroidJniObject getLinkTextColor();
		jint getShadowColor();
		jfloat getShadowDx();
		jfloat getShadowDy();
		jfloat getShadowRadius();
		jint getSpanTypeId();
		QAndroidJniObject getTextColor();
		jint getTextFontWeight();
		QAndroidJniObject getTextLocales();
		jint getTextSize();
		jint getTextStyle();
		QAndroidJniObject getTypeface();
		jboolean isElegantTextHeight();
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

