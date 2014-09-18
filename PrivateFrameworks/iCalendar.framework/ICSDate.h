/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSString;

@interface ICSDate : ICSProperty {
}

@property(retain) NSString * tzid;

- (id)components;
- (id)description;
- (bool)hasFloatingTimeZone;
- (bool)hasTimeComponent;
- (id)initWithValue:(id)arg1;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (void)setTzid:(id)arg1;
- (id)tzid;

@end
