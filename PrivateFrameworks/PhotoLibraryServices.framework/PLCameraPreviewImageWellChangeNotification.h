/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, UIImage;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {
    UIImage *_image;
    NSString *_uuid;
}

@property(retain,readonly) NSString * assetUUID;
@property(retain,readonly) UIImage * image;

+ (id)notification;

- (id)_init;
- (id)assetUUID;
- (void)dealloc;
- (id)description;
- (id)image;
- (id)init;
- (id)name;
- (id)object;
- (id)userInfo;

@end
