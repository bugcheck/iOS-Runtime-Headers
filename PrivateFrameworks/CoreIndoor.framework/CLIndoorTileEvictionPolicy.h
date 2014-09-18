/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@class NSObject<OS_xpc_object>;

@interface CLIndoorTileEvictionPolicy : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> *_activity;
    double _maxModifiedAge;
    bool_forceClean;
}

@property(retain) NSObject<OS_xpc_object> * activity;
@property bool forceClean;
@property double maxModifiedAge;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activity;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceClean;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)maxModifiedAge;
- (void)setActivity:(id)arg1;
- (void)setForceClean:(bool)arg1;
- (void)setMaxModifiedAge:(double)arg1;
- (bool)tileLastModified:(double)arg1 needsEvictionAt:(double)arg2;

@end
