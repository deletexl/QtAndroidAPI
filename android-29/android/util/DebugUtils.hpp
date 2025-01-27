#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::util
{
	class DebugUtils : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DebugUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DebugUtils(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isObjectSelected(JObject arg0);
	};
} // namespace android::util

