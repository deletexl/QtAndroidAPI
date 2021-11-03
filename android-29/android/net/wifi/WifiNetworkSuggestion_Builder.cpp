#include "../MacAddress.hpp"
#include "./WifiEnterpriseConfig.hpp"
#include "./WifiNetworkSuggestion.hpp"
#include "../../../JString.hpp"
#include "./WifiNetworkSuggestion_Builder.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QJniObject forward
	WifiNetworkSuggestion_Builder::WifiNetworkSuggestion_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiNetworkSuggestion_Builder::WifiNetworkSuggestion_Builder()
		: JObject(
			"android.net.wifi.WifiNetworkSuggestion$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::wifi::WifiNetworkSuggestion WifiNetworkSuggestion_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/WifiNetworkSuggestion;"
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setBssid(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"setBssid",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsAppInteractionRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsAppInteractionRequired",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsEnhancedOpen(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsEnhancedOpen",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsHiddenSsid(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsHiddenSsid",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsMetered(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsMetered",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsUserInteractionRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsUserInteractionRequired",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setPriority(jint arg0) const
	{
		return callObjectMethod(
			"setPriority",
			"(I)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setSsid(JString arg0) const
	{
		return callObjectMethod(
			"setSsid",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0) const
	{
		return callObjectMethod(
			"setWpa2EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa2Passphrase(JString arg0) const
	{
		return callObjectMethod(
			"setWpa2Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0) const
	{
		return callObjectMethod(
			"setWpa3EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa3Passphrase(JString arg0) const
	{
		return callObjectMethod(
			"setWpa3Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::wifi

