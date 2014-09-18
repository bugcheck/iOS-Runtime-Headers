/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSSet;

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding> {
    NSSet *_categories;
    unsigned long long _types;
}

@property(copy,readonly) NSSet * categories;
@property(readonly) unsigned long long types;

+ (id)settingsForRegisteredSettings:(id)arg1 requestedSettings:(id)arg2;
+ (id)settingsForTypes:(unsigned long long)arg1 categories:(id)arg2;
+ (id)settingsForUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2;
+ (bool)supportsSecureCoding;

- (unsigned long long)allowedUserNotificationTypes;
- (id)categories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypes:(unsigned long long)arg1 categories:(id)arg2;
- (id)initWithUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)mayPresentUserNotificationOfType:(unsigned long long)arg1;
- (unsigned long long)types;
- (id)userNotificationActionSettings;
- (id)validatedSettings;

@end
