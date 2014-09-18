/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBatteryMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int cycleCountKey : 1; 
        unsigned int durationDispOn : 1; 
        unsigned int durationPartialDispOff : 1; 
        unsigned int durationPartialDispOn : 1; 
        unsigned int energyChargedMicroWatt : 1; 
        unsigned int energyConsumedDisplayOffMicroWatt : 1; 
        unsigned int energyConsumedDisplayOnMicroWatt : 1; 
        unsigned int energyConsumedPartailDispOnMicrowatt : 1; 
    unsigned int _cycleCountKey;
    unsigned int _durationDispOn;
    unsigned int _durationPartialDispOff;
    unsigned int _durationPartialDispOn;
    unsigned int _energyChargedMicroWatt;
    unsigned int _energyConsumedDisplayOffMicroWatt;
    unsigned int _energyConsumedDisplayOnMicroWatt;
    unsigned int _energyConsumedPartailDispOnMicrowatt;
    } _has;
    unsigned long long _timestamp;
}

@property unsigned int cycleCountKey;
@property unsigned int durationDispOn;
@property unsigned int durationPartialDispOff;
@property unsigned int durationPartialDispOn;
@property unsigned int energyChargedMicroWatt;
@property unsigned int energyConsumedDisplayOffMicroWatt;
@property unsigned int energyConsumedDisplayOnMicroWatt;
@property unsigned int energyConsumedPartailDispOnMicrowatt;
@property bool hasCycleCountKey;
@property bool hasDurationDispOn;
@property bool hasDurationPartialDispOff;
@property bool hasDurationPartialDispOn;
@property bool hasEnergyChargedMicroWatt;
@property bool hasEnergyConsumedDisplayOffMicroWatt;
@property bool hasEnergyConsumedDisplayOnMicroWatt;
@property bool hasEnergyConsumedPartailDispOnMicrowatt;
@property bool hasTimestamp;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)cycleCountKey;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)durationDispOn;
- (unsigned int)durationPartialDispOff;
- (unsigned int)durationPartialDispOn;
- (unsigned int)energyChargedMicroWatt;
- (unsigned int)energyConsumedDisplayOffMicroWatt;
- (unsigned int)energyConsumedDisplayOnMicroWatt;
- (unsigned int)energyConsumedPartailDispOnMicrowatt;
- (bool)hasCycleCountKey;
- (bool)hasDurationDispOn;
- (bool)hasDurationPartialDispOff;
- (bool)hasDurationPartialDispOn;
- (bool)hasEnergyChargedMicroWatt;
- (bool)hasEnergyConsumedDisplayOffMicroWatt;
- (bool)hasEnergyConsumedDisplayOnMicroWatt;
- (bool)hasEnergyConsumedPartailDispOnMicrowatt;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCycleCountKey:(unsigned int)arg1;
- (void)setDurationDispOn:(unsigned int)arg1;
- (void)setDurationPartialDispOff:(unsigned int)arg1;
- (void)setDurationPartialDispOn:(unsigned int)arg1;
- (void)setEnergyChargedMicroWatt:(unsigned int)arg1;
- (void)setEnergyConsumedDisplayOffMicroWatt:(unsigned int)arg1;
- (void)setEnergyConsumedDisplayOnMicroWatt:(unsigned int)arg1;
- (void)setEnergyConsumedPartailDispOnMicrowatt:(unsigned int)arg1;
- (void)setHasCycleCountKey:(bool)arg1;
- (void)setHasDurationDispOn:(bool)arg1;
- (void)setHasDurationPartialDispOff:(bool)arg1;
- (void)setHasDurationPartialDispOn:(bool)arg1;
- (void)setHasEnergyChargedMicroWatt:(bool)arg1;
- (void)setHasEnergyConsumedDisplayOffMicroWatt:(bool)arg1;
- (void)setHasEnergyConsumedDisplayOnMicroWatt:(bool)arg1;
- (void)setHasEnergyConsumedPartailDispOnMicrowatt:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
