/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {
    NSMutableDictionary *_attachmentsByURL;
    MFLock *_attachmentsLock;
    NSMutableDictionary *_removedAttachmentsByURL;
}

@property bool keepRemovedAttachments;

+ (id)_setOfAllSources;
+ (id)allSources;

- (id)attachmentForURL:(id)arg1 includeRemoved:(bool)arg2;
- (id)attachmentForURL:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)keepRemovedAttachments;
- (void)removeAttachmentForURL:(id)arg1;
- (bool)setAttachment:(id)arg1 forURL:(id)arg2;
- (void)setKeepRemovedAttachments:(bool)arg1;

@end
