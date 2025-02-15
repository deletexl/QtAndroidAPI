#include "./Paint_FontMetrics.hpp"

namespace android::graphics
{
	// Fields
	jfloat Paint_FontMetrics::ascent()
	{
		return getField<jfloat>(
			"ascent"
		);
	}
	jfloat Paint_FontMetrics::bottom()
	{
		return getField<jfloat>(
			"bottom"
		);
	}
	jfloat Paint_FontMetrics::descent()
	{
		return getField<jfloat>(
			"descent"
		);
	}
	jfloat Paint_FontMetrics::leading()
	{
		return getField<jfloat>(
			"leading"
		);
	}
	jfloat Paint_FontMetrics::top()
	{
		return getField<jfloat>(
			"top"
		);
	}
	
	// QJniObject forward
	Paint_FontMetrics::Paint_FontMetrics(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Paint_FontMetrics::Paint_FontMetrics()
		: JObject(
			"android.graphics.Paint$FontMetrics",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

