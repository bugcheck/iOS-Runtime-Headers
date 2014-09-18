/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CoreDAVTaskGroupDelegate>, NSMutableSet, NSSet, NSString, NSURL;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
    NSURL *_calendarURL;
    NSMutableSet *_invalidSharees;
    NSSet *_shareesToRemove;
    NSSet *_shareesToSet;
    NSString *_summary;
}

@property(retain) NSURL * calendarURL;
@property(copy,readonly) NSString * debugDescription;
@property <CoreDAVTaskGroupDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) NSMutableSet * invalidSharees;
@property(retain) NSSet * shareesToRemove;
@property(retain) NSSet * shareesToSet;
@property(retain) NSString * summary;
@property(readonly) Class superclass;

- (id)calendarURL;
- (void)dealloc;
- (id)description;
- (id)generateModificationMessageBody;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6;
- (id)invalidSharees;
- (void)setCalendarURL:(id)arg1;
- (void)setInvalidSharees:(id)arg1;
- (void)setShareesToRemove:(id)arg1;
- (void)setShareesToSet:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)shareesToRemove;
- (id)shareesToSet;
- (void)startTaskGroup;
- (id)summary;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
