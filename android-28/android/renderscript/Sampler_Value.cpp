#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Sampler_Value.hpp"

namespace android::renderscript
{
	// Fields
	android::renderscript::Sampler_Value Sampler_Value::CLAMP()
	{
		return getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"CLAMP",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	android::renderscript::Sampler_Value Sampler_Value::LINEAR()
	{
		return getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"LINEAR",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	android::renderscript::Sampler_Value Sampler_Value::LINEAR_MIP_LINEAR()
	{
		return getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"LINEAR_MIP_LINEAR",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	android::renderscript::Sampler_Value Sampler_Value::LINEAR_MIP_NEAREST()
	{
		return getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"LINEAR_MIP_NEAREST",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	android::renderscript::Sampler_Value Sampler_Value::MIRRORED_REPEAT()
	{
		return getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"MIRRORED_REPEAT",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	android::renderscript::Sampler_Value Sampler_Value::NEAREST()
	{
		return getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"NEAREST",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	android::renderscript::Sampler_Value Sampler_Value::WRAP()
	{
		return getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"WRAP",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	
	// QJniObject forward
	Sampler_Value::Sampler_Value(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::Sampler_Value Sampler_Value::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Sampler$Value",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Sampler$Value;",
			arg0.object<jstring>()
		);
	}
	JArray Sampler_Value::values()
	{
		return callStaticObjectMethod(
			"android.renderscript.Sampler$Value",
			"values",
			"()[Landroid/renderscript/Sampler$Value;"
		);
	}
} // namespace android::renderscript

