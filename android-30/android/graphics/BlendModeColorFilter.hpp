#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ColorFilter.hpp"

namespace android::graphics
{
	class BlendMode;
}

namespace android::graphics
{
	class BlendModeColorFilter : public android::graphics::ColorFilter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BlendModeColorFilter(const char *className, const char *sig, Ts...agv) : android::graphics::ColorFilter(className, sig, std::forward<Ts>(agv)...) {}
		BlendModeColorFilter(QAndroidJniObject obj);
		
		// Constructors
		BlendModeColorFilter(jint arg0, android::graphics::BlendMode arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getColor();
		android::graphics::BlendMode getMode();
		jint hashCode();
	};
} // namespace android::graphics
