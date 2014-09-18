/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDClient, NSDictionary, NSSet;

@interface ACDClientAuthorization : NSObject {
    ACDClient *_client;
    NSSet *_grantedPermissions;
    NSDictionary *_options;
    bool_isGranted;
}

@property(retain) ACDClient * client;
@property(retain) NSSet * grantedPermissions;
@property bool isGranted;
@property(copy) NSDictionary * options;

- (void).cxx_destruct;
- (id)client;
- (id)grantedPermissions;
- (id)initForClient:(id)arg1;
- (bool)isGranted;
- (id)options;
- (void)setClient:(id)arg1;
- (void)setGrantedPermissions:(id)arg1;
- (void)setIsGranted:(bool)arg1;
- (void)setOptions:(id)arg1;

@end
