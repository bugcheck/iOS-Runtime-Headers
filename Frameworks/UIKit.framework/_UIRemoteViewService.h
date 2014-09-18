/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <PKPlugIn>, NSExtension, NSUUID;

@interface _UIRemoteViewService : NSObject {
    NSUUID *_contextToken;
    NSExtension *_extension;
}

@property(copy) NSUUID * contextToken;
@property(retain) NSExtension * extension;
@property(retain) <PKPlugIn> * plugin;

- (id)contextToken;
- (void)dealloc;
- (id)extension;
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;
- (id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2;
- (id)plugin;
- (void)setContextToken:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setPlugin:(id)arg1;

@end
