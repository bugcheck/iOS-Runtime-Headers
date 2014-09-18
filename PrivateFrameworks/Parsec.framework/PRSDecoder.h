/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class <PRSDecoderDelegate>, NSMapTable;

@interface PRSDecoder : NSObject {
    NSMapTable *_converters;
    <PRSDecoderDelegate> *_delegate;
}

@property <PRSDecoderDelegate> * delegate;

- (void).cxx_destruct;
- (void)_addBuiltInConverters;
- (bool)_decodeObject:(id)arg1 withProtocol:(id)arg2 fromDictionary:(id)arg3 path:(id)arg4 serverProperties:(id)arg5;
- (id)_decodeObjectOfClass:(Class)arg1 protocol:(id)arg2 fromValue:(id)arg3 parentObject:(id)arg4 propertyName:(id)arg5 path:(id)arg6;
- (id)_numberFromNumber:(id)arg1 expectedType:(char *)arg2;
- (id)convertBlockForClass:(Class)arg1;
- (bool)decodeObject:(id)arg1 withProtocol:(id)arg2 fromDictionary:(id)arg3;
- (id)delegate;
- (id)init;
- (void)setConverterForClass:(Class)arg1 withBlock:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
