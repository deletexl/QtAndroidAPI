#include "../../app/PendingIntent.hpp"
#include "./ScanCallback.hpp"
#include "./ScanSettings.hpp"
#include "../../../JString.hpp"
#include "./BluetoothLeScanner.hpp"

namespace android::bluetooth::le
{
	// Fields
	JString BluetoothLeScanner::EXTRA_CALLBACK_TYPE()
	{
		return getStaticObjectField(
			"android.bluetooth.le.BluetoothLeScanner",
			"EXTRA_CALLBACK_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothLeScanner::EXTRA_ERROR_CODE()
	{
		return getStaticObjectField(
			"android.bluetooth.le.BluetoothLeScanner",
			"EXTRA_ERROR_CODE",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothLeScanner::EXTRA_LIST_SCAN_RESULT()
	{
		return getStaticObjectField(
			"android.bluetooth.le.BluetoothLeScanner",
			"EXTRA_LIST_SCAN_RESULT",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	BluetoothLeScanner::BluetoothLeScanner(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BluetoothLeScanner::flushPendingScanResults(android::bluetooth::le::ScanCallback arg0) const
	{
		callMethod<void>(
			"flushPendingScanResults",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.object()
		);
	}
	jint BluetoothLeScanner::startScan(JObject arg0, android::bluetooth::le::ScanSettings arg1, android::app::PendingIntent arg2) const
	{
		return callMethod<jint>(
			"startScan",
			"(Ljava/util/List;Landroid/bluetooth/le/ScanSettings;Landroid/app/PendingIntent;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void BluetoothLeScanner::startScan(android::bluetooth::le::ScanCallback arg0) const
	{
		callMethod<void>(
			"startScan",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.object()
		);
	}
	void BluetoothLeScanner::startScan(JObject arg0, android::bluetooth::le::ScanSettings arg1, android::bluetooth::le::ScanCallback arg2) const
	{
		callMethod<void>(
			"startScan",
			"(Ljava/util/List;Landroid/bluetooth/le/ScanSettings;Landroid/bluetooth/le/ScanCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void BluetoothLeScanner::stopScan(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"stopScan",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	void BluetoothLeScanner::stopScan(android::bluetooth::le::ScanCallback arg0) const
	{
		callMethod<void>(
			"stopScan",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.object()
		);
	}
} // namespace android::bluetooth::le

