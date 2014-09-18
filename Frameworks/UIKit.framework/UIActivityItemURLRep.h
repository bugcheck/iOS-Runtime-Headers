/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject {
    NSURL *_URL;
    long long _attachmentURLType;
    UIImage *_thumbnail;
}

@property(retain) NSURL * URL;
@property long long attachmentURLType;
@property(retain) UIImage * thumbnail;

- (id)URL;
- (long long)attachmentURLType;
- (void)dealloc;
- (bool)isFileURL;
- (id)scheme;
- (void)setAttachmentURLType:(long long)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setURL:(id)arg1;
- (id)thumbnail;

@end
