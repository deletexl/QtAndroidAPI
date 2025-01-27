#pragma once

#include "./MaskFilter.hpp"

namespace android::graphics
{
	class BlurMaskFilter_Blur;
}

namespace android::graphics
{
	class BlurMaskFilter : public android::graphics::MaskFilter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BlurMaskFilter(const char *className, const char *sig, Ts...agv) : android::graphics::MaskFilter(className, sig, std::forward<Ts>(agv)...) {}
		BlurMaskFilter(QJniObject obj);
		
		// Constructors
		BlurMaskFilter(jfloat arg0, android::graphics::BlurMaskFilter_Blur arg1);
		
		// Methods
	};
} // namespace android::graphics

