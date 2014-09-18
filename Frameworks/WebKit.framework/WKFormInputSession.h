/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSObject<NSSecureCoding>, NSString, WKContentView;

@interface WKFormInputSession : NSObject <_WKFormInputSession> {
    struct RetainPtr<NSObject<NSSecureCoding> > { 
        void *m_ptr; 
    WKContentView *_contentView;
    } _userObject;
}

@property(copy) NSString * accessoryViewCustomButtonTitle;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSObject<NSSecureCoding> * userObject;
@property(getter=isValid,readonly) bool valid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessoryViewCustomButtonTitle;
- (id)initWithContentView:(id)arg1 userObject:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (void)setAccessoryViewCustomButtonTitle:(id)arg1;
- (id)userObject;

@end
