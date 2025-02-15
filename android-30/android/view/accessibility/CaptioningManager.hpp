#pragma once

#include "../../../JObject.hpp"

namespace android::view::accessibility
{
	class CaptioningManager_CaptionStyle;
}
namespace android::view::accessibility
{
	class CaptioningManager_CaptioningChangeListener;
}
namespace java::util
{
	class Locale;
}

namespace android::view::accessibility
{
	class CaptioningManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptioningManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptioningManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0) const;
		jfloat getFontScale() const;
		java::util::Locale getLocale() const;
		android::view::accessibility::CaptioningManager_CaptionStyle getUserStyle() const;
		jboolean isEnabled() const;
		void removeCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0) const;
	};
} // namespace android::view::accessibility

