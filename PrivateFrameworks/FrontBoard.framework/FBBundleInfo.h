/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class LSApplicationProxy, NSString, NSURL;

@interface FBBundleInfo : NSObject {
    NSString *_bundleIdentifier;
    NSString *_bundleType;
    NSURL *_bundleURL;
    NSString *_bundleVersion;
    NSString *_displayName;
    LSApplicationProxy *_proxy;
}

@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * bundleType;
@property(retain) NSURL * bundleURL;
@property(copy) NSString * bundleVersion;
@property(copy) NSString * displayName;
@property(getter=_proxy,retain,readonly) LSApplicationProxy * proxy;

- (id)_proxy;
- (id)bundleIdentifier;
- (id)bundleType;
- (id)bundleURL;
- (id)bundleVersion;
- (void)dealloc;
- (id)displayName;
- (id)initWithApplicationProxy:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleType:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setDisplayName:(id)arg1;

@end
