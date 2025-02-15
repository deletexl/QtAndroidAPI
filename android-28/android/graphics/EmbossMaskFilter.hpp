#pragma once

#include "./MaskFilter.hpp"

class JFloatArray;

namespace android::graphics
{
	class EmbossMaskFilter : public android::graphics::MaskFilter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EmbossMaskFilter(const char *className, const char *sig, Ts...agv) : android::graphics::MaskFilter(className, sig, std::forward<Ts>(agv)...) {}
		EmbossMaskFilter(QJniObject obj);
		
		// Constructors
		EmbossMaskFilter(JFloatArray arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
	};
} // namespace android::graphics

