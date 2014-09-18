/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSData;

@interface RURadioStreamPing : NSObject {
    double _timestamp;
    long long _type;
    NSData *_value;
}

@property(readonly) double timestamp;
@property(readonly) long long type;
@property(copy,readonly) NSData * value;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 value:(id)arg2 timestamp:(double)arg3;
- (bool)isEqual:(id)arg1;
- (double)timestamp;
- (long long)type;
- (id)value;

@end
