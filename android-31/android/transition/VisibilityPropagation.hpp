#pragma once

#include "./TransitionPropagation.hpp"

class JArray;
namespace android::transition
{
	class TransitionValues;
}

namespace android::transition
{
	class VisibilityPropagation : public android::transition::TransitionPropagation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VisibilityPropagation(const char *className, const char *sig, Ts...agv) : android::transition::TransitionPropagation(className, sig, std::forward<Ts>(agv)...) {}
		VisibilityPropagation(QJniObject obj);
		
		// Constructors
		VisibilityPropagation();
		
		// Methods
		void captureValues(android::transition::TransitionValues arg0) const;
		JArray getPropagationProperties() const;
		jint getViewVisibility(android::transition::TransitionValues arg0) const;
		jint getViewX(android::transition::TransitionValues arg0) const;
		jint getViewY(android::transition::TransitionValues arg0) const;
	};
} // namespace android::transition

