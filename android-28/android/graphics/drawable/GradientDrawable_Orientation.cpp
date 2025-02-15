#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./GradientDrawable_Orientation.hpp"

namespace android::graphics::drawable
{
	// Fields
	android::graphics::drawable::GradientDrawable_Orientation GradientDrawable_Orientation::BL_TR()
	{
		return getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"BL_TR",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	android::graphics::drawable::GradientDrawable_Orientation GradientDrawable_Orientation::BOTTOM_TOP()
	{
		return getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"BOTTOM_TOP",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	android::graphics::drawable::GradientDrawable_Orientation GradientDrawable_Orientation::BR_TL()
	{
		return getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"BR_TL",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	android::graphics::drawable::GradientDrawable_Orientation GradientDrawable_Orientation::LEFT_RIGHT()
	{
		return getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"LEFT_RIGHT",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	android::graphics::drawable::GradientDrawable_Orientation GradientDrawable_Orientation::RIGHT_LEFT()
	{
		return getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"RIGHT_LEFT",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	android::graphics::drawable::GradientDrawable_Orientation GradientDrawable_Orientation::TL_BR()
	{
		return getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"TL_BR",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	android::graphics::drawable::GradientDrawable_Orientation GradientDrawable_Orientation::TOP_BOTTOM()
	{
		return getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"TOP_BOTTOM",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	android::graphics::drawable::GradientDrawable_Orientation GradientDrawable_Orientation::TR_BL()
	{
		return getStaticObjectField(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"TR_BL",
			"Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
	
	// QJniObject forward
	GradientDrawable_Orientation::GradientDrawable_Orientation(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::drawable::GradientDrawable_Orientation GradientDrawable_Orientation::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/drawable/GradientDrawable$Orientation;",
			arg0.object<jstring>()
		);
	}
	JArray GradientDrawable_Orientation::values()
	{
		return callStaticObjectMethod(
			"android.graphics.drawable.GradientDrawable$Orientation",
			"values",
			"()[Landroid/graphics/drawable/GradientDrawable$Orientation;"
		);
	}
} // namespace android::graphics::drawable

