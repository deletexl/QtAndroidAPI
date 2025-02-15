#include "./RenderScript.hpp"
#include "./Script_FieldID.hpp"
#include "./Script_KernelID.hpp"
#include "./ScriptGroup.hpp"
#include "./Type.hpp"
#include "./ScriptGroup_Builder.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	ScriptGroup_Builder::ScriptGroup_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ScriptGroup_Builder::ScriptGroup_Builder(android::renderscript::RenderScript arg0)
		: JObject(
			"android.renderscript.ScriptGroup$Builder",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.object()
		) {}
	
	// Methods
	android::renderscript::ScriptGroup_Builder ScriptGroup_Builder::addConnection(android::renderscript::Type arg0, android::renderscript::Script_KernelID arg1, android::renderscript::Script_FieldID arg2) const
	{
		return callObjectMethod(
			"addConnection",
			"(Landroid/renderscript/Type;Landroid/renderscript/Script$KernelID;Landroid/renderscript/Script$FieldID;)Landroid/renderscript/ScriptGroup$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::renderscript::ScriptGroup_Builder ScriptGroup_Builder::addConnection(android::renderscript::Type arg0, android::renderscript::Script_KernelID arg1, android::renderscript::Script_KernelID arg2) const
	{
		return callObjectMethod(
			"addConnection",
			"(Landroid/renderscript/Type;Landroid/renderscript/Script$KernelID;Landroid/renderscript/Script$KernelID;)Landroid/renderscript/ScriptGroup$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::renderscript::ScriptGroup_Builder ScriptGroup_Builder::addKernel(android::renderscript::Script_KernelID arg0) const
	{
		return callObjectMethod(
			"addKernel",
			"(Landroid/renderscript/Script$KernelID;)Landroid/renderscript/ScriptGroup$Builder;",
			arg0.object()
		);
	}
	android::renderscript::ScriptGroup ScriptGroup_Builder::create() const
	{
		return callObjectMethod(
			"create",
			"()Landroid/renderscript/ScriptGroup;"
		);
	}
} // namespace android::renderscript

