/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerWifiMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int wifi2P4GHzRxDuration : 1; 
        unsigned int wifi2P4GHzTxDuration : 1; 
        unsigned int wifi5GHz20MHzRxDuration : 1; 
        unsigned int wifi5GHz20MHzTxDuration : 1; 
        unsigned int wifi5GHz40MHzRxDuration : 1; 
        unsigned int wifi5GHz40MHzTxDuration : 1; 
        unsigned int wifi5GHz80MHzRxDuration : 1; 
        unsigned int wifi5GHz80MHzTxDuration : 1; 
        unsigned int wifiFRTSDuration : 1; 
        unsigned int wifiHsicActiveDuration : 1; 
        unsigned int wifiPcieL0Duration : 1; 
        unsigned int wifiPcieL10Duration : 1; 
        unsigned int wifiPcieL11Duration : 1; 
        unsigned int wifiPcieL12Duration : 1; 
        unsigned int wifiScanDuration : 1; 
        unsigned int wifiSleepDuration : 1; 
        unsigned int wifiTotalDuration : 1; 
        unsigned int wifiTotalPowerMicroWatt : 1; 
    } _has;
    unsigned long long _timestamp;
    unsigned int _wifi2P4GHzRxDuration;
    unsigned int _wifi2P4GHzTxDuration;
    unsigned int _wifi5GHz20MHzRxDuration;
    unsigned int _wifi5GHz20MHzTxDuration;
    unsigned int _wifi5GHz40MHzRxDuration;
    unsigned int _wifi5GHz40MHzTxDuration;
    unsigned int _wifi5GHz80MHzRxDuration;
    unsigned int _wifi5GHz80MHzTxDuration;
    unsigned int _wifiFRTSDuration;
    unsigned int _wifiHsicActiveDuration;
    unsigned int _wifiPcieL0Duration;
    unsigned int _wifiPcieL10Duration;
    unsigned int _wifiPcieL11Duration;
    unsigned int _wifiPcieL12Duration;
    unsigned int _wifiScanDuration;
    unsigned int _wifiSleepDuration;
    unsigned int _wifiTotalDuration;
    unsigned int _wifiTotalPowerMicroWatt;
}

@property bool hasTimestamp;
@property bool hasWifi2P4GHzRxDuration;
@property bool hasWifi2P4GHzTxDuration;
@property bool hasWifi5GHz20MHzRxDuration;
@property bool hasWifi5GHz20MHzTxDuration;
@property bool hasWifi5GHz40MHzRxDuration;
@property bool hasWifi5GHz40MHzTxDuration;
@property bool hasWifi5GHz80MHzRxDuration;
@property bool hasWifi5GHz80MHzTxDuration;
@property bool hasWifiFRTSDuration;
@property bool hasWifiHsicActiveDuration;
@property bool hasWifiPcieL0Duration;
@property bool hasWifiPcieL10Duration;
@property bool hasWifiPcieL11Duration;
@property bool hasWifiPcieL12Duration;
@property bool hasWifiScanDuration;
@property bool hasWifiSleepDuration;
@property bool hasWifiTotalDuration;
@property bool hasWifiTotalPowerMicroWatt;
@property unsigned long long timestamp;
@property unsigned int wifi2P4GHzRxDuration;
@property unsigned int wifi2P4GHzTxDuration;
@property unsigned int wifi5GHz20MHzRxDuration;
@property unsigned int wifi5GHz20MHzTxDuration;
@property unsigned int wifi5GHz40MHzRxDuration;
@property unsigned int wifi5GHz40MHzTxDuration;
@property unsigned int wifi5GHz80MHzRxDuration;
@property unsigned int wifi5GHz80MHzTxDuration;
@property unsigned int wifiFRTSDuration;
@property unsigned int wifiHsicActiveDuration;
@property unsigned int wifiPcieL0Duration;
@property unsigned int wifiPcieL10Duration;
@property unsigned int wifiPcieL11Duration;
@property unsigned int wifiPcieL12Duration;
@property unsigned int wifiScanDuration;
@property unsigned int wifiSleepDuration;
@property unsigned int wifiTotalDuration;
@property unsigned int wifiTotalPowerMicroWatt;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasWifi2P4GHzRxDuration;
- (bool)hasWifi2P4GHzTxDuration;
- (bool)hasWifi5GHz20MHzRxDuration;
- (bool)hasWifi5GHz20MHzTxDuration;
- (bool)hasWifi5GHz40MHzRxDuration;
- (bool)hasWifi5GHz40MHzTxDuration;
- (bool)hasWifi5GHz80MHzRxDuration;
- (bool)hasWifi5GHz80MHzTxDuration;
- (bool)hasWifiFRTSDuration;
- (bool)hasWifiHsicActiveDuration;
- (bool)hasWifiPcieL0Duration;
- (bool)hasWifiPcieL10Duration;
- (bool)hasWifiPcieL11Duration;
- (bool)hasWifiPcieL12Duration;
- (bool)hasWifiScanDuration;
- (bool)hasWifiSleepDuration;
- (bool)hasWifiTotalDuration;
- (bool)hasWifiTotalPowerMicroWatt;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWifi2P4GHzRxDuration:(bool)arg1;
- (void)setHasWifi2P4GHzTxDuration:(bool)arg1;
- (void)setHasWifi5GHz20MHzRxDuration:(bool)arg1;
- (void)setHasWifi5GHz20MHzTxDuration:(bool)arg1;
- (void)setHasWifi5GHz40MHzRxDuration:(bool)arg1;
- (void)setHasWifi5GHz40MHzTxDuration:(bool)arg1;
- (void)setHasWifi5GHz80MHzRxDuration:(bool)arg1;
- (void)setHasWifi5GHz80MHzTxDuration:(bool)arg1;
- (void)setHasWifiFRTSDuration:(bool)arg1;
- (void)setHasWifiHsicActiveDuration:(bool)arg1;
- (void)setHasWifiPcieL0Duration:(bool)arg1;
- (void)setHasWifiPcieL10Duration:(bool)arg1;
- (void)setHasWifiPcieL11Duration:(bool)arg1;
- (void)setHasWifiPcieL12Duration:(bool)arg1;
- (void)setHasWifiScanDuration:(bool)arg1;
- (void)setHasWifiSleepDuration:(bool)arg1;
- (void)setHasWifiTotalDuration:(bool)arg1;
- (void)setHasWifiTotalPowerMicroWatt:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWifi2P4GHzRxDuration:(unsigned int)arg1;
- (void)setWifi2P4GHzTxDuration:(unsigned int)arg1;
- (void)setWifi5GHz20MHzRxDuration:(unsigned int)arg1;
- (void)setWifi5GHz20MHzTxDuration:(unsigned int)arg1;
- (void)setWifi5GHz40MHzRxDuration:(unsigned int)arg1;
- (void)setWifi5GHz40MHzTxDuration:(unsigned int)arg1;
- (void)setWifi5GHz80MHzRxDuration:(unsigned int)arg1;
- (void)setWifi5GHz80MHzTxDuration:(unsigned int)arg1;
- (void)setWifiFRTSDuration:(unsigned int)arg1;
- (void)setWifiHsicActiveDuration:(unsigned int)arg1;
- (void)setWifiPcieL0Duration:(unsigned int)arg1;
- (void)setWifiPcieL10Duration:(unsigned int)arg1;
- (void)setWifiPcieL11Duration:(unsigned int)arg1;
- (void)setWifiPcieL12Duration:(unsigned int)arg1;
- (void)setWifiScanDuration:(unsigned int)arg1;
- (void)setWifiSleepDuration:(unsigned int)arg1;
- (void)setWifiTotalDuration:(unsigned int)arg1;
- (void)setWifiTotalPowerMicroWatt:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)wifi2P4GHzRxDuration;
- (unsigned int)wifi2P4GHzTxDuration;
- (unsigned int)wifi5GHz20MHzRxDuration;
- (unsigned int)wifi5GHz20MHzTxDuration;
- (unsigned int)wifi5GHz40MHzRxDuration;
- (unsigned int)wifi5GHz40MHzTxDuration;
- (unsigned int)wifi5GHz80MHzRxDuration;
- (unsigned int)wifi5GHz80MHzTxDuration;
- (unsigned int)wifiFRTSDuration;
- (unsigned int)wifiHsicActiveDuration;
- (unsigned int)wifiPcieL0Duration;
- (unsigned int)wifiPcieL10Duration;
- (unsigned int)wifiPcieL11Duration;
- (unsigned int)wifiPcieL12Duration;
- (unsigned int)wifiScanDuration;
- (unsigned int)wifiSleepDuration;
- (unsigned int)wifiTotalDuration;
- (unsigned int)wifiTotalPowerMicroWatt;
- (void)writeTo:(id)arg1;

@end
