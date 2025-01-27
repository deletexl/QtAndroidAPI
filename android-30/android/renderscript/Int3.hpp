#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Int3 : public JObject
	{
	public:
		// Fields
		jint x();
		jint y();
		jint z();
		
		// QJniObject forward
		template<typename ...Ts> explicit Int3(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Int3(QJniObject obj);
		
		// Constructors
		Int3();
		Int3(jint arg0, jint arg1, jint arg2);
		
		// Methods
	};
} // namespace android::renderscript

