/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CoreDAVTaskGroupDelegate>, CalDAVCalendarServerInviteNotificationItem, NSString, NSURL;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
    NSURL *_calendarHomeURL;
    CalDAVCalendarServerInviteNotificationItem *_invitation;
    NSURL *_sharedAs;
    bool_acceptInvitation;
}

@property bool acceptInvitation;
@property(retain) NSURL * calendarHomeURL;
@property(copy,readonly) NSString * debugDescription;
@property <CoreDAVTaskGroupDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) CalDAVCalendarServerInviteNotificationItem * invitation;
@property(retain) NSURL * sharedAs;
@property(readonly) Class superclass;

- (bool)acceptInvitation;
- (id)calendarHomeURL;
- (void)dealloc;
- (id)description;
- (id)generateReply;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)initWithInvitation:(id)arg1 acceptInvitation:(bool)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (id)invitation;
- (void)setAcceptInvitation:(bool)arg1;
- (void)setCalendarHomeURL:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setSharedAs:(id)arg1;
- (id)sharedAs;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
