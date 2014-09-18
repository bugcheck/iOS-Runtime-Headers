/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, WBSParsecImageRepresentation;

@interface WBSParsecSearchResult : NSObject <WBSCompletionListItem> {
    NSString *_completion;
    WBSParsecImageRepresentation *_completionIcon;
    NSString *_descriptionText;
    NSString *_feedbackIdentifier;
    NSNumber *_iTunesItemIdentifier;
    WBSParsecImageRepresentation *_icon;
    NSString *_identifier;
    unsigned long long _minimumRankOfTopHitToSuppressResult;
    NSURL *_reportProblemURL;
    NSString *_sectionHeader;
    NSDictionary *_styleOverrides;
    NSArray *_supportedStyleOverrides;
    NSString *_title;
    unsigned long long _type;
    NSString *_urlString;
}

@property(readonly) NSString * completion;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSString * descriptionText;
@property(readonly) NSString * feedbackIdentifier;
@property(readonly) unsigned long long hash;
@property(readonly) NSNumber * iTunesItemIdentifier;
@property(readonly) NSString * identifier;
@property(readonly) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly) NSString * parsecDomainIdentifier;
@property(readonly) NSURL * reportProblemURL;
@property(readonly) NSString * sectionHeader;
@property(readonly) NSDictionary * styleOverrides;
@property(readonly) Class superclass;
@property(readonly) NSArray * supportedStyleOverrides;
@property(readonly) NSString * title;
@property(readonly) unsigned long long type;
@property(readonly) NSString * urlString;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (Class)replacementClass;
+ (id)resultWithDictionary:(id)arg1 cache:(id)arg2;
+ (void)setReplacementClass:(Class)arg1;

- (void).cxx_destruct;
- (unsigned long long)_constructTypeMaskForTypeString:(id)arg1;
- (id)_glyphRepresentationsFromGlyphDictionaries:(id)arg1;
- (id)_glyphsFromGlyphRepresentations:(id)arg1 withSession:(id)arg2;
- (void)_setStyleOverridesWithDictionary:(id)arg1;
- (id)completion;
- (id)completionIconWithSession:(id)arg1;
- (id)descriptionText;
- (id)feedbackIdentifier;
- (id)iTunesItemIdentifier;
- (id)iconWithSession:(id)arg1;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)minimumRankOfTopHitToSuppressResult;
- (id)parsecDomainIdentifier;
- (id)reportProblemURL;
- (id)sectionHeader;
- (id)styleOverrides;
- (id)supportedStyleOverrides;
- (id)title;
- (unsigned long long)type;
- (id)urlString;

@end
