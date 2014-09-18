/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMHandle;

@interface IMLocationShareActionChatItem : IMTranscriptChatItem {
    IMHandle *_otherHandle;
    IMHandle *_sender;
}

@property(readonly) long long actionType;
@property(readonly) long long direction;
@property(readonly) bool isFromMe;
@property(retain,readonly) IMHandle * otherHandle;
@property(retain,readonly) IMHandle * sender;

- (Class)__ck_chatItemClass;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;
- (long long)actionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)direction;
- (bool)isFromMe;
- (id)otherHandle;
- (id)sender;

@end
