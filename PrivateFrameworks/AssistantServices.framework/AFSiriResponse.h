/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSUUID;

@interface AFSiriResponse : NSObject <NSSecureCoding> {
    NSUUID *_requestIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1;
- (id)_initWithRequestIdentifier:(id)arg1;
- (id)_requestIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
