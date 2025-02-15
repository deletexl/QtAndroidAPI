#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class MutableChar : public JObject
	{
	public:
		// Fields
		jchar value();
		
		// QJniObject forward
		template<typename ...Ts> explicit MutableChar(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MutableChar(QJniObject obj);
		
		// Constructors
		MutableChar(jchar arg0);
		
		// Methods
	};
} // namespace android::util

