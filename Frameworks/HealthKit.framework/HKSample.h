/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKSampleType, NSDate;

@interface HKSample : HKObject {
    NSDate *_endDate;
    HKSampleType *_sampleType;
    NSDate *_startDate;
}

@property(readonly) NSDate * endDate;
@property(readonly) HKSampleType * sampleType;
@property(readonly) NSDate * startDate;

+ (id)_newSampleWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 config:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setEndDate:(id)arg1;
- (void)_setSampleType:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (id)_validateConfiguration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (long long)entityType;
- (id)initWithCoder:(id)arg1;
- (id)sampleType;
- (id)startDate;

@end
