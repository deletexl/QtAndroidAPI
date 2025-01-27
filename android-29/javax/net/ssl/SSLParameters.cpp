#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./SSLParameters.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	SSLParameters::SSLParameters(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SSLParameters::SSLParameters()
		: JObject(
			"javax.net.ssl.SSLParameters",
			"()V"
		) {}
	SSLParameters::SSLParameters(JArray arg0)
		: JObject(
			"javax.net.ssl.SSLParameters",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		) {}
	SSLParameters::SSLParameters(JArray arg0, JArray arg1)
		: JObject(
			"javax.net.ssl.SSLParameters",
			"([Ljava/lang/String;[Ljava/lang/String;)V",
			arg0.object<jarray>(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	JObject SSLParameters::getAlgorithmConstraints() const
	{
		return callObjectMethod(
			"getAlgorithmConstraints",
			"()Ljava/security/AlgorithmConstraints;"
		);
	}
	JArray SSLParameters::getApplicationProtocols() const
	{
		return callObjectMethod(
			"getApplicationProtocols",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLParameters::getCipherSuites() const
	{
		return callObjectMethod(
			"getCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	jboolean SSLParameters::getEnableRetransmissions() const
	{
		return callMethod<jboolean>(
			"getEnableRetransmissions",
			"()Z"
		);
	}
	JString SSLParameters::getEndpointIdentificationAlgorithm() const
	{
		return callObjectMethod(
			"getEndpointIdentificationAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	jint SSLParameters::getMaximumPacketSize() const
	{
		return callMethod<jint>(
			"getMaximumPacketSize",
			"()I"
		);
	}
	jboolean SSLParameters::getNeedClientAuth() const
	{
		return callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	JArray SSLParameters::getProtocols() const
	{
		return callObjectMethod(
			"getProtocols",
			"()[Ljava/lang/String;"
		);
	}
	JObject SSLParameters::getSNIMatchers() const
	{
		return callObjectMethod(
			"getSNIMatchers",
			"()Ljava/util/Collection;"
		);
	}
	JObject SSLParameters::getServerNames() const
	{
		return callObjectMethod(
			"getServerNames",
			"()Ljava/util/List;"
		);
	}
	jboolean SSLParameters::getUseCipherSuitesOrder() const
	{
		return callMethod<jboolean>(
			"getUseCipherSuitesOrder",
			"()Z"
		);
	}
	jboolean SSLParameters::getWantClientAuth() const
	{
		return callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	void SSLParameters::setAlgorithmConstraints(JObject arg0) const
	{
		callMethod<void>(
			"setAlgorithmConstraints",
			"(Ljava/security/AlgorithmConstraints;)V",
			arg0.object()
		);
	}
	void SSLParameters::setApplicationProtocols(JArray arg0) const
	{
		callMethod<void>(
			"setApplicationProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLParameters::setCipherSuites(JArray arg0) const
	{
		callMethod<void>(
			"setCipherSuites",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLParameters::setEnableRetransmissions(jboolean arg0) const
	{
		callMethod<void>(
			"setEnableRetransmissions",
			"(Z)V",
			arg0
		);
	}
	void SSLParameters::setEndpointIdentificationAlgorithm(JString arg0) const
	{
		callMethod<void>(
			"setEndpointIdentificationAlgorithm",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SSLParameters::setMaximumPacketSize(jint arg0) const
	{
		callMethod<void>(
			"setMaximumPacketSize",
			"(I)V",
			arg0
		);
	}
	void SSLParameters::setNeedClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLParameters::setProtocols(JArray arg0) const
	{
		callMethod<void>(
			"setProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLParameters::setSNIMatchers(JObject arg0) const
	{
		callMethod<void>(
			"setSNIMatchers",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void SSLParameters::setServerNames(JObject arg0) const
	{
		callMethod<void>(
			"setServerNames",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void SSLParameters::setUseCipherSuitesOrder(jboolean arg0) const
	{
		callMethod<void>(
			"setUseCipherSuitesOrder",
			"(Z)V",
			arg0
		);
	}
	void SSLParameters::setWantClientAuth(jboolean arg0) const
	{
		callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
} // namespace javax::net::ssl

