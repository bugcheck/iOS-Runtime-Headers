/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class NSError, NSString;

@interface MPUReportingMescalSetupCompletionEvent : NSObject <MPUReportingEvent> {
    NSError *_error;
    double _setupDuration;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSError * error;
@property(readonly) unsigned int hash;
@property double setupDuration;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (BOOL)isValidReportingEvent;
- (unsigned int)reportingEventType;
- (void)setError:(id)arg1;
- (void)setSetupDuration:(double)arg1;
- (double)setupDuration;

@end
