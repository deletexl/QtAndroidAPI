#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::transition
{
	class Transition;
}
namespace android::transition
{
	class TransitionValues;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::transition
{
	class TransitionPropagation : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TransitionPropagation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TransitionPropagation(QJniObject obj);
		
		// Constructors
		TransitionPropagation();
		
		// Methods
		void captureValues(android::transition::TransitionValues arg0) const;
		JArray getPropagationProperties() const;
		jlong getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const;
	};
} // namespace android::transition

