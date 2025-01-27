#include "./ConversationStatus.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ConversationStatus_Builder.hpp"

namespace android::app::people
{
	// Fields
	
	// QJniObject forward
	ConversationStatus_Builder::ConversationStatus_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConversationStatus_Builder::ConversationStatus_Builder(JString arg0, jint arg1)
		: JObject(
			"android.app.people.ConversationStatus$Builder",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	android::app::people::ConversationStatus ConversationStatus_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/people/ConversationStatus;"
		);
	}
	android::app::people::ConversationStatus_Builder ConversationStatus_Builder::setAvailability(jint arg0) const
	{
		return callObjectMethod(
			"setAvailability",
			"(I)Landroid/app/people/ConversationStatus$Builder;",
			arg0
		);
	}
	android::app::people::ConversationStatus_Builder ConversationStatus_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/people/ConversationStatus$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::people::ConversationStatus_Builder ConversationStatus_Builder::setEndTimeMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setEndTimeMillis",
			"(J)Landroid/app/people/ConversationStatus$Builder;",
			arg0
		);
	}
	android::app::people::ConversationStatus_Builder ConversationStatus_Builder::setIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/people/ConversationStatus$Builder;",
			arg0.object()
		);
	}
	android::app::people::ConversationStatus_Builder ConversationStatus_Builder::setStartTimeMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setStartTimeMillis",
			"(J)Landroid/app/people/ConversationStatus$Builder;",
			arg0
		);
	}
} // namespace android::app::people

