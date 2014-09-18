/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyNotification.framework/FamilyNotification
 */

@class NSData, NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface FAFamilyNotification : NSObject <NSSecureCoding> {
    NSString *_actionButtonLabel;
    NSURL *_activateActionURL;
    NSURL *_clearActionURL;
    NSString *_clientIdentifier;
    NSString *_delegateMachServiceName;
    NSURL *_dismissActionlURL;
    unsigned long long _displayStyle;
    NSDate *_expiryDate;
    NSNumber *_familyMemberDSID;
    NSString *_identifier;
    NSString *_informativeText;
    NSData *_launchActionArguments;
    NSURL *_launchActionURL;
    NSString *_otherButtonLabel;
    NSDate *_relevanceDate;
    NSString *_title;
    NSString *_unlockActionLabel;
    NSDictionary *_userInfo;
    NSString *_uuid;
    bool_hasActionButton;
    bool_shouldPersistWhenActivated;
    bool_shouldPersistWhenDismissed;
}

@property(copy) NSString * actionButtonLabel;
@property(copy) NSURL * activateActionURL;
@property(copy) NSURL * clearActionURL;
@property(copy) NSString * clientIdentifier;
@property(copy) NSString * delegateMachServiceName;
@property(copy) NSURL * dismissActionlURL;
@property unsigned long long displayStyle;
@property(copy) NSDate * expiryDate;
@property(copy) NSNumber * familyMemberDSID;
@property bool hasActionButton;
@property(copy) NSString * identifier;
@property(copy) NSString * informativeText;
@property(copy) NSData * launchActionArguments;
@property(copy) NSURL * launchActionURL;
@property(copy) NSString * otherButtonLabel;
@property(copy) NSDate * relevanceDate;
@property bool shouldPersistWhenActivated;
@property bool shouldPersistWhenDismissed;
@property(copy) NSString * title;
@property(copy) NSString * unlockActionLabel;
@property(copy) NSDictionary * userInfo;
@property(copy) NSString * uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionButtonLabel;
- (id)activateActionURL;
- (id)cacheDictionaryRepresentation;
- (id)clearActionURL;
- (id)clientIdentifier;
- (id)delegateMachServiceName;
- (id)description;
- (id)dismissActionlURL;
- (unsigned long long)displayStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (id)familyMemberDSID;
- (bool)hasActionButton;
- (id)identifier;
- (id)informativeText;
- (id)init;
- (id)initWithCacheDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)launchActionArguments;
- (id)launchActionURL;
- (id)otherButtonLabel;
- (id)relevanceDate;
- (void)setActionButtonLabel:(id)arg1;
- (void)setActivateActionURL:(id)arg1;
- (void)setClearActionURL:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setDelegateMachServiceName:(id)arg1;
- (void)setDismissActionlURL:(id)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setFamilyMemberDSID:(id)arg1;
- (void)setHasActionButton:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setLaunchActionArguments:(id)arg1;
- (void)setLaunchActionURL:(id)arg1;
- (void)setOtherButtonLabel:(id)arg1;
- (void)setRelevanceDate:(id)arg1;
- (void)setShouldPersistWhenActivated:(bool)arg1;
- (void)setShouldPersistWhenDismissed:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnlockActionLabel:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUuid:(id)arg1;
- (bool)shouldPersistWhenActivated;
- (bool)shouldPersistWhenDismissed;
- (id)title;
- (id)unlockActionLabel;
- (id)userInfo;
- (id)uuid;

@end
