#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Element_DataType.hpp"

namespace android::renderscript
{
	// Fields
	android::renderscript::Element_DataType Element_DataType::BOOLEAN()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"BOOLEAN",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::FLOAT_16()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"FLOAT_16",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::FLOAT_32()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"FLOAT_32",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::FLOAT_64()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"FLOAT_64",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::MATRIX_2X2()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"MATRIX_2X2",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::MATRIX_3X3()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"MATRIX_3X3",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::MATRIX_4X4()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"MATRIX_4X4",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::NONE()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"NONE",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::RS_ALLOCATION()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_ALLOCATION",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::RS_ELEMENT()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_ELEMENT",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::RS_FONT()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_FONT",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::RS_MESH()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_MESH",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::RS_PROGRAM_FRAGMENT()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_PROGRAM_FRAGMENT",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::RS_PROGRAM_RASTER()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_PROGRAM_RASTER",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::RS_PROGRAM_STORE()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_PROGRAM_STORE",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::RS_PROGRAM_VERTEX()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_PROGRAM_VERTEX",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::RS_SAMPLER()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_SAMPLER",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::RS_SCRIPT()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_SCRIPT",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::RS_TYPE()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_TYPE",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::SIGNED_16()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"SIGNED_16",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::SIGNED_32()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"SIGNED_32",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::SIGNED_64()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"SIGNED_64",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::SIGNED_8()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"SIGNED_8",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::UNSIGNED_16()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_16",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::UNSIGNED_32()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_32",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::UNSIGNED_4_4_4_4()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_4_4_4_4",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::UNSIGNED_5_5_5_1()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_5_5_5_1",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::UNSIGNED_5_6_5()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_5_6_5",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::UNSIGNED_64()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_64",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element_DataType Element_DataType::UNSIGNED_8()
	{
		return getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_8",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	
	// QJniObject forward
	Element_DataType::Element_DataType(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::Element_DataType Element_DataType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element$DataType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Element$DataType;",
			arg0.object<jstring>()
		);
	}
	JArray Element_DataType::values()
	{
		return callStaticObjectMethod(
			"android.renderscript.Element$DataType",
			"values",
			"()[Landroid/renderscript/Element$DataType;"
		);
	}
} // namespace android::renderscript

