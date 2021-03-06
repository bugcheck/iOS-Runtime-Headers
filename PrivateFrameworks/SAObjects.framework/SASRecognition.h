/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SASRecognition : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSArray * phrases;
@property int sentenceConfidence;
@property(readonly) Class superclass;

+ (id)recognition;
+ (id)recognitionWithDictionary:(id)arg1 context:(id)arg2;

- (id)af_speechPhrases;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)phrases;
- (int)sentenceConfidence;
- (void)setPhrases:(id)arg1;
- (void)setSentenceConfidence:(int)arg1;

@end
