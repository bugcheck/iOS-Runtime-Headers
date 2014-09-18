/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSData, NSDate, NSNumber, NSString, PLAgent, PLBBMsg;

@interface PLBasebandMessage : NSObject {
    PLAgent *_agent;
    NSDate *_apTimestamp;
    NSDate *_date;
    PLBBMsg *_logger;
    NSNumber *_msgType;
    NSString *_pload;
    NSNumber *_seqNum;
    double _timeCal;
    NSData *rawData;
    unsigned int ticksInGPSONState;
    unsigned int ticksInGoodState;
    double timeCalibration;
}

@property(retain) PLAgent * agent;
@property(retain,readonly) NSDate * apTimestamp;
@property(retain,readonly) NSDate * calibratedTimestamp;
@property(retain) NSDate * date;
@property(retain) PLBBMsg * logger;
@property(retain) NSNumber * msgType;
@property(retain) NSString * pload;
@property(retain,readonly) NSData * rawData;
@property(retain) NSNumber * seqNum;
@property(readonly) unsigned int ticksInGPSONState;
@property(readonly) unsigned int ticksInGoodState;
@property double timeCal;
@property double timeCalibration;
@property(retain,readonly) NSDate * timestamp;

+ (id)messageWithData:(id)arg1;

- (void).cxx_destruct;
- (id)agent;
- (id)apTimestamp;
- (id)calibratedTimestamp;
- (id)date;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (bool)isCalibratedDateGood;
- (bool)isTimestampValid:(char *)arg1;
- (void)logEntry:(id)arg1 withBody:(id)arg2;
- (void)logMsgAll;
- (void)logWithLogger:(id)arg1;
- (id)logger;
- (id)msgType;
- (id)pload;
- (id)rawData;
- (id)seqNum;
- (void)setAgent:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setMsgType:(id)arg1;
- (void)setPload:(id)arg1;
- (void)setSeqNum:(id)arg1;
- (void)setTimeCal:(double)arg1;
- (void)setTimeCalibration:(double)arg1;
- (unsigned int)ticksInGPSONState;
- (unsigned int)ticksInGoodState;
- (double)timeCal;
- (double)timeCalibration;
- (id)timestamp;

@end
