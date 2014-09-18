/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class IMAPAccount, NSArray;

@interface _MFIMAPMailboxDeletionQueueEntry : NSObject {
    IMAPAccount *account;
    NSArray *paths;
    NSArray *urls;
}

@property(retain) IMAPAccount * account;
@property(copy) NSArray * paths;
@property(copy) NSArray * urls;

- (id)account;
- (void)dealloc;
- (id)paths;
- (void)setAccount:(id)arg1;
- (void)setPaths:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)urls;

@end
