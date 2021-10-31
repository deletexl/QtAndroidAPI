#include "./BlurMaskFilter_Blur.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::INNER()
	{
		return getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"INNER",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::NORMAL()
	{
		return getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"NORMAL",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::OUTER()
	{
		return getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"OUTER",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::SOLID()
	{
		return getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"SOLID",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	
	// QAndroidJniObject forward
	BlurMaskFilter_Blur::BlurMaskFilter_Blur(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::BlurMaskFilter_Blur BlurMaskFilter_Blur::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.BlurMaskFilter$Blur",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/BlurMaskFilter$Blur;",
			arg0
		);
	}
	jarray BlurMaskFilter_Blur::values()
	{
		return callStaticObjectMethod(
			"android.graphics.BlurMaskFilter$Blur",
			"values",
			"()[Landroid/graphics/BlurMaskFilter$Blur;"
		).object<jarray>();
	}
} // namespace android::graphics
