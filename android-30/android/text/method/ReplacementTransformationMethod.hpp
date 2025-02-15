#pragma once

#include "../../../JObject.hpp"

class JCharArray;
namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class View;
}
class JString;

namespace android::text::method
{
	class ReplacementTransformationMethod : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReplacementTransformationMethod(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReplacementTransformationMethod(QJniObject obj);
		
		// Constructors
		ReplacementTransformationMethod();
		
		// Methods
		JString getTransformation(JString arg0, android::view::View arg1) const;
		void onFocusChanged(android::view::View arg0, JString arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4) const;
	};
} // namespace android::text::method

