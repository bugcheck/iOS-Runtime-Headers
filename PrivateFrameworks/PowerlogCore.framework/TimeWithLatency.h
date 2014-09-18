/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSDate;

@interface TimeWithLatency : NSObject {
    double _latency;
    NSDate *_time;
}

@property double latency;
@property(retain) NSDate * time;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTime:(id)arg1 andLatency:(double)arg2;
- (double)latency;
- (void)setLatency:(double)arg1;
- (void)setTime:(id)arg1;
- (id)time;

@end
