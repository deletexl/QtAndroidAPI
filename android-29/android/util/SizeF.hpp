#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class SizeF : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SizeF(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SizeF(QJniObject obj);
		
		// Constructors
		SizeF(jfloat arg0, jfloat arg1);
		
		// Methods
		static android::util::SizeF parseSizeF(JString arg0);
		jboolean equals(JObject arg0) const;
		jfloat getHeight() const;
		jfloat getWidth() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::util

