/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSExtension, NSString;

@interface _UIDocumentPickerDescriptor : NSObject {
    NSExtension *_extension;
}

@property bool enabled;
@property(retain) NSExtension * extension;
@property(retain,readonly) NSString * fileProviderDocumentGroup;
@property(copy,readonly) NSString * identifier;
@property(copy,readonly) NSString * localizedName;
@property(copy,readonly) NSString * nonUIIdentifier;
@property(copy,readonly) NSArray * supportedContentTypes;

+ (id)allPickers;
+ (id)allPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (BOOL)cloudEnabledStatus;
+ (id)defaultPickerIdentifierForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)descriptorWithIdentifier:(id)arg1;
+ (id)enabledPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)hostBundleID;
+ (void)setCloudEnabledStatus:(BOOL)arg1;
+ (void)setHostBundleID:(id)arg1;

- (id)_extensionValueOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_ownBundle;
- (id)_parentApp;
- (long long)compare:(id)arg1;
- (bool)enabled;
- (id)extension;
- (id)fileProviderDocumentGroup;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageWithScale:(double)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)nonUIBundle;
- (id)nonUIIdentifier;
- (void)setEnabled:(bool)arg1;
- (void)setExtension:(id)arg1;
- (id)supportedContentTypes;
- (bool)supportsPickerMode:(unsigned long long)arg1;

@end
