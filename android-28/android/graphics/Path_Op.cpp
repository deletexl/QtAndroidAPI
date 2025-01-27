#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Path_Op.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Path_Op Path_Op::DIFFERENCE()
	{
		return getStaticObjectField(
			"android.graphics.Path$Op",
			"DIFFERENCE",
			"Landroid/graphics/Path$Op;"
		);
	}
	android::graphics::Path_Op Path_Op::INTERSECT()
	{
		return getStaticObjectField(
			"android.graphics.Path$Op",
			"INTERSECT",
			"Landroid/graphics/Path$Op;"
		);
	}
	android::graphics::Path_Op Path_Op::REVERSE_DIFFERENCE()
	{
		return getStaticObjectField(
			"android.graphics.Path$Op",
			"REVERSE_DIFFERENCE",
			"Landroid/graphics/Path$Op;"
		);
	}
	android::graphics::Path_Op Path_Op::UNION()
	{
		return getStaticObjectField(
			"android.graphics.Path$Op",
			"UNION",
			"Landroid/graphics/Path$Op;"
		);
	}
	android::graphics::Path_Op Path_Op::XOR()
	{
		return getStaticObjectField(
			"android.graphics.Path$Op",
			"XOR",
			"Landroid/graphics/Path$Op;"
		);
	}
	
	// QJniObject forward
	Path_Op::Path_Op(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Path_Op Path_Op::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Path$Op",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$Op;",
			arg0.object<jstring>()
		);
	}
	JArray Path_Op::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Path$Op",
			"values",
			"()[Landroid/graphics/Path$Op;"
		);
	}
} // namespace android::graphics

