#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Region;
}

namespace android::inputmethodservice
{
	class InputMethodService_Insets : public JObject
	{
	public:
		// Fields
		static jint TOUCHABLE_INSETS_CONTENT();
		static jint TOUCHABLE_INSETS_FRAME();
		static jint TOUCHABLE_INSETS_REGION();
		static jint TOUCHABLE_INSETS_VISIBLE();
		jint contentTopInsets();
		jint touchableInsets();
		android::graphics::Region touchableRegion();
		jint visibleTopInsets();
		
		// QJniObject forward
		template<typename ...Ts> explicit InputMethodService_Insets(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodService_Insets(QJniObject obj);
		
		// Constructors
		InputMethodService_Insets();
		
		// Methods
	};
} // namespace android::inputmethodservice

