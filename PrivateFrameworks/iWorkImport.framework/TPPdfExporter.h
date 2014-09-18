/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDictionary, NSString;

@interface TPPdfExporter : TPRenderingExporter <TSKEncryptedDocumentExporter> {
    NSDictionary *mOptions;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)dealloc;
- (id)p_renderingExporterDelegate;
- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;
- (void)setOptions:(id)arg1;
- (void)setPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;

@end
