#pragma once

#include "../../../JObject.hpp"

class JString;

namespace java::security::spec
{
	class PSSParameterSpec : public JObject
	{
	public:
		// Fields
		static java::security::spec::PSSParameterSpec DEFAULT();
		static jint TRAILER_FIELD_BC();
		
		// QJniObject forward
		template<typename ...Ts> explicit PSSParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PSSParameterSpec(QJniObject obj);
		
		// Constructors
		PSSParameterSpec(jint arg0);
		PSSParameterSpec(JString arg0, JString arg1, JObject arg2, jint arg3, jint arg4);
		
		// Methods
		JString getDigestAlgorithm() const;
		JString getMGFAlgorithm() const;
		JObject getMGFParameters() const;
		jint getSaltLength() const;
		jint getTrailerField() const;
		JString toString() const;
	};
} // namespace java::security::spec

